#ifndef __MAIN_H
#define __MAIN_H

/* Hardware Defines ----------------------------------------------------------*/
#define BTN_Port            GPIOE
#define BTN_Pin             GPIO_PIN_0

#define LED_G_Port          GPIOE
#define LED_G_Pin           GPIO_PIN_2
#define LED_Y_Port          GPIOE
#define LED_Y_Pin           GPIO_PIN_3
#define LED_R_Port          GPIOE
#define LED_R_Pin           GPIO_PIN_4

/* Hardware Macros -----------------------------------------------------------*/
#define LED_G_ON()          HAL_GPIO_WritePin(LED_G_Port, LED_G_Pin, GPIO_PIN_SET)
#define LED_G_OFF()         HAL_GPIO_WritePin(LED_G_Port, LED_G_Pin, GPIO_PIN_RESET)
#define LED_G_TG()          HAL_GPIO_TogglePin(LED_G_Port, LED_G_Pin)
#define LED_Y_ON()          HAL_GPIO_WritePin(LED_Y_Port, LED_Y_Pin, GPIO_PIN_SET)
#define LED_Y_OFF()         HAL_GPIO_WritePin(LED_Y_Port, LED_Y_Pin, GPIO_PIN_RESET)
#define LED_Y_TG()          HAL_GPIO_TogglePin(LED_Y_Port, LED_Y_Pin)
#define LED_R_ON()          HAL_GPIO_WritePin(LED_R_Port, LED_R_Pin, GPIO_PIN_SET)
#define LED_R_OFF()         HAL_GPIO_WritePin(LED_R_Port, LED_R_Pin, GPIO_PIN_RESET)
#define LED_R_TG()          HAL_GPIO_TogglePin(LED_R_Port, LED_R_Pin)

#define LED_ALL_ON()        do { LED_G_ON(); LED_Y_ON(); LED_R_ON(); } while(0)
#define LED_ALL_OFF()       do { LED_G_OFF(); LED_Y_OFF(); LED_R_OFF(); } while(0)

#define IS_BTN_PRESSED()    ((HAL_GPIO_ReadPin(BTN_Port, BTN_Pin) == GPIO_PIN_RESET) ? 1 : 0)


#endif /* __MAIN_H */