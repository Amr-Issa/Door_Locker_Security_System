/*
 * buzzer.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Amr Issa
 */


#include"buzzer.h"
#include"gpio.h"

void BUZZER_init()
{
	GPIO_setupPinDirection(BUZZER_PORT,BUZZER_PIN,PIN_OUTPUT);
}
void BUZZER_on()
{
	GPIO_writePin(BUZZER_PORT,BUZZER_PIN,LOGIC_HIGH);
}

void BUZZER_off()
{
	GPIO_writePin(BUZZER_PORT,BUZZER_PIN,LOGIC_LOW);
}
