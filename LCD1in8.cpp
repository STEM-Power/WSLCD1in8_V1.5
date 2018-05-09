/*****************************************************************************
* | File      	:   LCD1in8.cpp
* | Author      :   Waveshare team
* | Function    :   Contorl lcd Show
* | Info        :
*----------------
* | This version:   V1.0
* | Date        :   2018-05-02
* | Info        :   Basic version
*
******************************************************************************/
#include "pxt.h"
#include "LCD_Driver.h"

using namespace pxt;

//% weight=20 color=#436EEE icon="\uf108"
namespace LCD1IN8 {
	LCD_Driver *LCD;
	
    //%
    void LCD_Init() {
        LCD->LCD_Init();
    }
	
    //%
    void LCD_Clear() {
        LCD->LCD_Clear(WHITE);
		LCD->LCD_ClearBuf();
    }
	
	//%
    void LCD_Display() {
        LCD->LCD_Display();
    }
	
	//%
    void LCD_SetBL(int Lev) {
        LCD->LCD_SetBL(Lev);
    }
	
    //%
    void DrawPoint(int x, int y, int Color, DOT_PIXEL Dot) {
        LCD->LCD_DrawPoint(x, y, Dot, Color);
    }

    //%
    void DisChar_1207(int Xchar, int Ychar, int Char_Offset, int Color){
        LCD->LCD_DisChar_1207(Xchar, Ychar, Char_Offset, Color);
    }
}

