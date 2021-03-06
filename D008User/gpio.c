#include "gpio.h"

void GPIO_Config_Init(void)
{
    /* Initialize I/Os in Output Mode */

    GPIO_Init(GPIOC, GPIO_PIN_6, GPIO_MODE_IN_PU_NO_IT);        // ��ť���A
    GPIO_Init(GPIOC, GPIO_PIN_7, GPIO_MODE_IN_PU_NO_IT);        // ��ť���B
 
    GPIO_Init(GPIOC, GPIO_PIN_3, GPIO_MODE_OUT_PP_HIGH_FAST);   // TM1628_DIO
    GPIO_Init(GPIOC, GPIO_PIN_4, GPIO_MODE_OUT_PP_HIGH_FAST);   // TM1628_CLK
    GPIO_Init(GPIOC, GPIO_PIN_5, GPIO_MODE_OUT_PP_HIGH_FAST);   // TM1628_STB

    GPIO_Init(GPIOC, GPIO_PIN_2, GPIO_MODE_OUT_PP_HIGH_FAST);   // ��ť����
    GPIO_Init(GPIOC, GPIO_PIN_1, GPIO_MODE_OUT_PP_LOW_FAST);    // ������ Power GPIO, STM8207��BEEP���ܽŽӷ��������ƽ�
    
    GPIO_Init(GPIOF, GPIO_PIN_3, GPIO_MODE_OUT_PP_LOW_FAST);    // �̵��� 1 ¯��
    GPIO_Init(GPIOF, GPIO_PIN_4, GPIO_MODE_OUT_PP_LOW_FAST);    // �̵��� 2 �����¹�
    GPIO_Init(GPIOF, GPIO_PIN_5, GPIO_MODE_OUT_PP_LOW_FAST);    // �̵��� 3 ���
    GPIO_Init(GPIOF, GPIO_PIN_6, GPIO_MODE_OUT_PP_LOW_FAST);    // �̵��� 4 �¹�
    GPIO_Init(GPIOF, GPIO_PIN_7, GPIO_MODE_OUT_PP_LOW_FAST);    // �̵��� 5 �Ϲ�
}

