/*
 * main.c
 *字符串显示有问题
 *  Created on: 2013-11-7
 *      Author: 31lab
 */
#include "msp430f5529.h"
#include "sys.h"
#include "lcd.h"
#include "font.h"
//刷屏程序
void main(void)
{
	WDTCTL = WDTPW + WDTHOLD;
	P1DIR |= 0x3F;
	P1OUT =BIT5;
	Lcd_Init();   //tft初始化

	LCD_Clear(WHITE); //清屏
	BACK_COLOR=BLACK;
	POINT_COLOR=WHITE;
	while(1)
	{
		 Lcd_Init();   //tft初始化
		 LCD_Clear(RED);
		 BACK_COLOR=WHITE;
		 POINT_COLOR=RED;
		 showhanzi(10,0,0);  //晶
		 showhanzi(45,0,1);  //耀
//		 LCD_ShowString(10,30,"2.2 inch TFT 240*320");
		 delayms(3000);
		 delayms(3000);
		 LCD_Clear(GREEN);
		 delayms(3000);
		 LCD_Clear(BLUE);
		 delayms(3000);
	}
}
