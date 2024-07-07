/*
    rtc_test
    ʵ����������ʱ�䣬��λ����ʾʱ��

*/
#include "ls1x.h"
#include "config.h"
#include "ls1x_gpio.h"
#include "ls1x_rtc.h"
#include "ls1x_latimer.h"
#include "ls1c102_ptimer.h"
#include "ls1c102_interrupt.h"
#include "rtc_test.h"
#include "ls1x_printf.h"
#include "ls1x_uart.h"
#include "gpio.h"
#include "BH1750.h"
#include "UserGpio.h"
#include "ls1x_string.h"
#include "AHT20.h"
#include "BMP280.h"
#include "iic_bus.h"


extern void WDG_DogFeed();
extern tsRtcTime rtc_param;

unsigned char receive_flag=0;//����
extern uint8_t receive_buf[];
extern bool flag_;

unsigned int BH=0;//����

extern int i;                        //��ѹ
extern int flow_rate;
extern int resistant_value;
extern int flag;
extern int32_t bmp280RawPressure;
extern int32_t bmp280RawTemperature;
uint8_t ret = 0;
int32_t t=0;
uint32_t pressure=0;


unsigned char flag_bj=0;
unsigned char flag_data=0;

void BH1750_collect()//���ղɼ�
{
    BH=Multiple_Read_BH1750();
    //printf("guangzhao=%dlux\r\n",BH);
}

void AHT20_collect()//��ʪ�Ȳɼ�
{
    collect_proc();
    //printf("wendu=%d.%d\r\n",wendu/10,wendu%10);
    //printf("shidu=%d.%d%\r\n",shidu/10,shidu%10);
}
void BMP280_collect()//��ѹ�ɼ�
{
    I2C_Bus_Init();
    ret = BMP280_Init();
    if(ret != 0x58)
    {
		//printf("BMP280error\n");
		//while(1);
    }
    BMP280GetPressure();
    //t=BMP280CompensateT(bmp280RawTemperature);
    //pressure=BMP280CompensateP(bmp280RawPressure);
    //printf("t: %d\r\n",t);
    
    //printf("qiya=%dPa\r\n",bmp280RawPressure-314200);//��ѹУ׼�˵�
    
    //printf("p: %d\r\n",BMP280CompensateP(bmp280RawPressure));
}
void rtc_collect()//ʵʱʱ�Ӳɼ�
{
    //uint8_t new_time=rtc_param.sec;
    RtcUpdateData(1, &rtc_param);
    //if(rtc_param.sec!=new_time)
    //{
       printf("date is: %u/%u/%u--%u:%u:%u\r\n",rtc_param.year+2000,rtc_param.mon,rtc_param.day,rtc_param.hour,rtc_param.min,rtc_param.sec);
    //}
}
void printf_proc()
{
    if(flag_data==0) return;
    flag_data=0;
    printf("2,%d.%d,%d.%d,%d,%d.%d,",wendu/10,wendu%10,shidu/10,shidu%10,BH,(bmp280RawPressure-325200)/1000,(bmp280RawPressure-325200)%1000/10);
    delay_ms(500);
    printf("cc");
}
void uart_jieshou_proc()//���ڽ��ܴ�����
{
    if(receive_flag==1)
    {
        receive_flag=0;
        if(strncmp(receive_buf,"bb",2)==0)//����TH
        {
            /*
            memset(receive_buf,0,5);
            printf_proc();
            delay_ms(500);
            printf("c");
            */
            //gpio_write_pin(20,1);
            flag_data=1;
            memset(receive_buf,0,5);
        }
        
        if(strncmp(receive_buf,"2ybj",4)==0)//����TH
        {
            flag_bj=1;
            memset(receive_buf,0,5);
            
        }
        else if(strncmp(receive_buf,"2nbj",4)==0)//����TL
        {
            flag_bj=0;
            memset(receive_buf,0,5);
        }
    }

}

extern unsigned int cnt_400ms;
void baojing_proc()//���ж�����
{
    //if(flag_buzzer_T||flag_buzzer_H||flag_buzzer_P||flag_buzzer_L)             //������
    if(flag_bj==1)
    {
        if(cnt_400ms<100)                //�������ཱུ���
        {
            gpio_write_pin(GPIO_PIN_63,1);
        }
        else if(cnt_400ms<500)
        {
            gpio_write_pin(GPIO_PIN_63,0);
        }
        else
        {
            cnt_400ms=0;
        }
    }
    else
    {
        gpio_write_pin(GPIO_PIN_63,0);
    }
}

extern unsigned int cnt_500ms;
void delay_500ms_proc()//��ʱ����ʱ500ms
{
    while(cnt_500ms<500);
    cnt_500ms=0;
}
int main(void)
{

    rtc_set_time(24, 1, 25, 16, 30, 0);//���������ռ�ʱ��
    
    
    gpio_write_pin(20,0);                   //��20��
    gpio_init(63,1);
    gpio_write(63,0);                       //�ط�����
    

    timer_init(1);                          //��ʱ����ʼ��  1--1ms
    
    gpio_pin_remap(5,0);                    //iic���ų�ʼ��
    gpio_pin_remap(4,0);

    for (;;)
    {
        WDG_DogFeed();
        //rtc_collect();//ʵʱʱ��
        AHT20_collect();//good��ʪ��          scl_gpio4     sda_gpio5
        BH1750_collect();//good����           scl_gpio4     sda_gpio5
        BMP280_collect();//may be good��ѹ    scl_gpio30    sda_gpio31
        //uart_jieshou_proc();//good����
        printf_proc();
    }
    return 0;
}














