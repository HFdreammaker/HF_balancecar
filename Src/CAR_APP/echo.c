#include "tim.h"
#include "stm32f1xx_hal_tim.h"
#include "echo.h"
#include "delay.h"

#include "stdio.h"

uint32_t capture_Buf[3] = {0};
uint8_t capture_Cnt = 0;
uint32_t high_time;
float dis;
float i=0;


//void Getdistance(void)
//{
//	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_SET);
//	delay_us(20);
//	HAL_GPIO_WritePin(GPIOA,GPIO_PIN_2,GPIO_PIN_RESET);
//  switch (capture_Cnt)
//		{
//		case 0:
//			capture_Cnt++;
//			__HAL_TIM_SET_CAPTUREPOLARITY(&htim1, TIM_CHANNEL_4, TIM_INPUTCHANNELPOLARITY_RISING);
//  		HAL_TIM_IC_Start_IT(&htim1, TIM_CHANNEL_4);
//			break;
//		case 3:
//			high_time = capture_Buf[1]- capture_Buf[0];				
//			capture_Cnt = 0;
//			dis=(float)high_time*0.17;
//			printf("dis = %f\n",dis);
//			break;				
//		}
//}


//void HAL_TIM_IC_CaptureCallback(TIM_HandleTypeDef *htim)
//{
//	if(TIM1 == htim->Instance)
//	{
//		switch(capture_Cnt)
//		{
//			case 1:
//				capture_Buf[0] = HAL_TIM_ReadCapturedValue(&htim1,TIM_CHANNEL_4);
//				__HAL_TIM_SET_CAPTUREPOLARITY(&htim1,TIM_CHANNEL_4,TIM_ICPOLARITY_FALLING);
//				capture_Cnt++;
//				break;
//			case 2:
//				capture_Buf[1] = HAL_TIM_ReadCapturedValue(&htim1,TIM_CHANNEL_4);
//				capture_Cnt++;    
//		}	
//	}
//	HAL_TIM_IC_Start_IT(&htim1, TIM_CHANNEL_4);
//}


