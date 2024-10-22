/*
 * 立创开发板软硬件资料与相关扩展板软硬件资料官网全部开源
 * 开发板官网：www.lckfb.com
 * 技术支持常驻论坛，任何技术问题欢迎随时交流学习
 * 立创论坛：https://oshwhub.com/forum
 * 关注bilibili账号：【立创开发板】，掌握我们的最新动态！
 * 不靠卖板赚钱，以培养中国工程师为己任
 * Change Logs:
 * Date           Author       Notes
 * 2024-03-26     LCKFB-LP    first version
 */
 
#ifndef __SYS_H__
#define __SYS_H__
 
#include "stm32f1xx_hal.h"

#define BIT_ADDR(Addr, Bit_Num) 		*((volatile uint32_t *)(0x42000000 + ((Addr - 0x40000000) * 32) + (Bit_Num * 4)))


#define GPIOA_ODR_ADDR    (GPIOA_BASE+12) //0x40000000 + 0x10000 + 0x0800 + 0x0C
#define GPIOB_ODR_ADDR    (GPIOB_BASE+12) //0x40000000 + 0x10000 + 0x0C00 + 0x0C
#define GPIOC_ODR_ADDR    (GPIOC_BASE+12) //0x40000000 + 0x10000 + 0x1000 + 0x0C


#define GPIOA_IDR_ADDR    (GPIOA_BASE+8) //0x40000000 + 0x10000 + 0x0800 + 0x08
#define GPIOB_IDR_ADDR    (GPIOB_BASE+8) //0x40000000 + 0x10000 + 0x0C00 + 0x08
#define GPIOC_IDR_ADDR    (GPIOC_BASE+8) //0x40000000 + 0x10000 + 0x1000 + 0x08


#define PAout(Pin)	BIT_ADDR(GPIOA_ODR_ADDR, Pin) // GPIOA输出
#define PBout(Pin)	BIT_ADDR(GPIOB_ODR_ADDR, Pin) // GPIOB输出
#define PCout(Pin)	BIT_ADDR(GPIOC_ODR_ADDR, Pin) // GPIOC输出

#define PAin(Pin)	BIT_ADDR(GPIOA_IDR_ADDR, Pin) // GPIOA输入
#define PBin(Pin)	BIT_ADDR(GPIOB_IDR_ADDR, Pin) // GPIOB输入
#define PCin(Pin)	BIT_ADDR(GPIOC_IDR_ADDR, Pin) // GPIOC输入

#endif
