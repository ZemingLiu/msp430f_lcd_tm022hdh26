/*
 * main.c
 *
 *  Created on: 2013-11-7
 *      Author: 31lab
 */
#include "msp430f5529.h"
#include "sys.h"
#include "lcd.h"
#include "font.h"
//����P1.0--P1.4
void main(void)
{
	WDTCTL = WDTPW + WDTHOLD;
	P1DIR |= 0x1F;
	Lcd_Init();   //tft��ʼ��
	LCD_Clear(WHITE); //����
	BACK_COLOR=BLACK;
	POINT_COLOR=WHITE;
	while(1)
	{
		 Lcd_Init();   //tft��ʼ��
		 LCD_Clear(RED);
		 delayms(3000);
		 LCD_Clear(GREEN);
		 delayms(3000);
		 LCD_Clear(BLUE);
		 delayms(3000);
	}
}



