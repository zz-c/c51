/**************************************************************************************
*		              LCD1602液晶显示实验												  *
实现现象：下载程序后插上LCD1602液晶在开发板上，即可显示
注意事项：如果不想让点阵模块显示，可以将74HC595模块上的JP595短接片拔掉。																				  
***************************************************************************************/

#include "reg52.h"			 //此文件中定义了单片机的一些特殊功能寄存器
#include "lcd.h"

typedef unsigned int u16;	  //对数据类型进行声明定义
typedef unsigned char u8;

u8 Disp[]="  Hello  World  ";

/*******************************************************************************
* 函 数 名         : main
* 函数功能		   : 主函数
* 输    入         : 无
* 输    出         : 无
*******************************************************************************/
void main(void)
{
	u8 i;
	LcdInit();
	for(i=0;i<16;i++)
	{
		LcdWriteData(Disp[i]);	
	}
	while(1);				
}
