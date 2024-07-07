/*
 * DHT11.c
 *
 * created: 2024/5/16
 *  author: 
 */

#include "DHT11.h"

uchar rec_dat[5];
uchar u=0;


void DHT11_Delay_us(unsigned int us)
{
    unsigned int differ = 0xffff - us - 5;
    //定时器启动
    TIM_InitStruct.TIME_START = 0x01;							//启动定时器
    while(differ < 0xffff - 5)
    {
        differ = TIM_GetCounter();    //获取TIMx的计数值
    }
    //定时器关闭
    TIM_InitStruct.TIME_START = 0x00;
}

void DHT11_start()
{
   gpio_init(13,1);
   gpio_write_pin(GPIO_PIN_13, 1);
   //delay_us(2);
   DHT11_Delay_us(2);
   gpio_write_pin(GPIO_PIN_13, 0);
   //delay_ms(20);   //拉低延时18ms以上
   DHT11_Delay_us(20000);
   gpio_write_pin(GPIO_PIN_13, 1);
   //delay_us(30);
   DHT11_Delay_us(30);
   //gpio_init(13,0);
   //delay_us(30);   //拉高 延时 20~40us，取中间值 30us
   while(gpio_read(13)==0);
   while(gpio_read(13)==1);
}
/*------------------------------------------------
              接收八位二进制
------------------------------------------------*/
uchar DHT11_Read_Bit(void)
{
    while(gpio_read(13)==1);
    while(gpio_read(13)==0);
    //delay_us(40);
    DHT11_Delay_us(40);
    if(gpio_read(13)==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

uchar DHT11_Read_Byte(void)
{
    uchar dat = 0;
    uchar i;
    for(i = 0; i < 8; i++)
    {
        dat <<= 1;
        dat |= DHT11_Read_Bit();
    }
    return dat;
}
/*
uchar DHT11_rec_byte()      //接收一个字节
{
  unsigned char i,dat=0;
  //unsigned char retry = 0;
  
  for(i=0;i<8;i++)    //从高到低依次接收8位数据
   {
      while(!gpio_read(13));   //等待50us低电平过去

      delay_us(40);     //延时60us，如果还为高则数据为1，否则为0
      dat<<=1;//移位（低位补零）使正确接收8位数据，数据为0时直接移位
      if(gpio_read(13))    //数据为1时，使dat加1来接收数据1
      {
          dat+=1;
      }
      while(gpio_read(13))//????????????????????????????????????????????????????????????一直是高电平
   }
    return dat;
}
*/
/*------------------------------------------------
              接收40bit数据（具体的温湿度）
1.主机先把data线拉高（io设置为输入）。
2.从机把data线拉低，主机读取data线电平，直到低电平结束（大约50us）
  从机拉高data线后，延迟40us左右（28~70us之间）主机再次读取data线电平，如果为低电平，则为“0”，如果为高电平，则为“1”。
3.继续重复上述1,2步骤累计40次。
------------------------------------------------*/
void DHT11_receive(unsigned int *humi, unsigned int *temp)      //接收40位的数据
{
    uchar buf[5];
    uchar i;
    DHT11_start();//发送起始信号：
    for(i = 0; i < 5; i++)
    {
        buf[i] = DHT11_Read_Byte();
    }
    if((buf[0] + buf[1] + buf[2] + buf[3]) == buf[4])
    {
        *humi = buf[0] << 8 | buf[1];
        *temp = buf[2] << 8 | buf[3];
    }
    
    //if(!gpio_read(13))//ok
    //{
        //printf("11111111\r\n");
        //u=2;
        //while(!gpio_read(13));   //等待拉高
        //printf("22222222222222\r\n");
        //while(gpio_read(13));  //拉高后延时80us
        //R_H=DHT11_rec_byte();    //接收湿度高八位
        //R_L=DHT11_rec_byte();    //接收湿度低八位
        //T_H=DHT11_rec_byte();    //接收温度高八位
        //T_L=DHT11_rec_byte();    //接收温度低八位
        //revise=DHT11_rec_byte(); //接收校正位

        //delay_us(50);    //结束

        //if((R_H+R_L+T_H+T_L)==revise)      //最后一字节为校验位，校验是否正确
        //{
            //u=3;
            //RH=R_H;
            //RL=R_L;
            //TH=T_H;
            //TL=T_L;
        //}
        //rec_dat[0]=RH;//湿度整数
        //rec_dat[1]=RL;//湿度小数
        //rec_dat[2]=TH;//温度整数
        //rec_dat[3]=TL;//温度小数
    //}
}


