/*
 * main.c
 *�ַ�����ʾ������
 *  Created on: 2013-11-7
 *      Author: 31lab
 */
#include "msp430f5529.h"
#include "sys.h"
#include "lcd.h"
#include "font.h"
//ˢ������
void main(void)
{
	WDTCTL = WDTPW + WDTHOLD;
	P1DIR |= 0x3F;
	P1OUT =BIT5;
	Lcd_Init();   //tft��ʼ��

	LCD_Clear(WHITE); //����
	BACK_COLOR=BLACK;
	POINT_COLOR=WHITE;
	while(1)
	{
		 Lcd_Init();   //tft��ʼ��
		 LCD_Clear(RED);
		 BACK_COLOR=WHITE;
		 POINT_COLOR=RED;
		 showhanzi(10,0,0);  //��
		 showhanzi(45,0,1);  //ҫ
//		 LCD_ShowString(10,30,"2.2 inch TFT 240*320");
		 delayms(3000);
		 delayms(3000);
		 LCD_Clear(GREEN);
		 delayms(3000);
		 LCD_Clear(BLUE);
		 delayms(3000);
	}
}
