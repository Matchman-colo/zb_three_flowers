/*
 * PM25.c
 *
 * created: 2024/5/17
 *  author: 
 */
#include "PM25.h"

unsigned int PM25_get_value(AdcChannel ch)
{
    static unsigned int adc_value=0;
    static unsigned char PM_count=0;
    static unsigned char PM25_value=0;
    gpio_write_pin(GPIO_PIN_34, 0);//led拉低
    delay_us(280);
    printf("P341=%d\r\n",gpio_read(34));
    adc_value+=adc_read(1);//Adc_singleMeasure(ch);
    delay_us(40);
    gpio_write_pin(GPIO_PIN_34, 1);//led拉高关闭
    printf("P342=%d\r\n",gpio_read(34));
    delay_us(9680);
    
    if(++PM_count==10)
    {
        PM_count=0;
        PM25_value=adc_value*33*17/4096-100;
        printf("PM25=%d\r\n",PM25_value);
        adc_value=0;
    }
    return PM25_value;
    
}


