/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Amir Wadie
 * @brief          : toggle led on A13
 */

#include <stdint.h>

typedef volatile unsigned int vuint32_t;

#define RCC_BASE 0x40021000
#define GPIO_BASE 0x40010800
#define RCC_APB2ENR *(vuint32_t *)(RCC_BASE+0x18)
#define GPIOA_CRH *(vuint32_t *)(GPIO_BASE+0x04)
#define GPIOA_ODR *(vuint32_t *)(GPIO_BASE+0x0C)

#define RCC_IOPAEN (1<<2)
#define GPIOA13 (1UL<<13)

int main(void) {
	RCC_APB2ENR |= RCC_IOPAEN;
	GPIOA_CRH &= 0xff0fffff;
	GPIOA_CRH |= 0x00200000;

	while (1) {
		GPIOA_ODR |= 1 << 13;
		for (int i = 0; i < 9000; i++)
			;
		GPIOA_ODR &= ~(1 << 13);
		for (int i = 0; i < 9000; i++)
			;
	}
}

