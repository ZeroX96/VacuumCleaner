#ifndef __DISPLAY_H__
#define __DISPLAY_H__

void DISP_Init(void);
void DISP_Update(void);
void DISP_Display_Time(tTIM_Time* TIM_Time);
void DISP_Flip_String_In_Place(char* string);

#endif // __DISPLAY_H__
