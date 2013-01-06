/*
 * File      : board.h
 * This file is part of RT-Thread RTOS
 * COPYRIGHT (C) 2009, RT-Thread Development Team
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rt-thread.org/license/LICENSE
 *
 * Change Logs:
 * Date           Author       Notes
 * 2009-09-22     Bernard      add board.h to this bsp
 */

// <<< Use Configuration Wizard in Context Menu >>>
#ifndef __BOARD_H__
#define __BOARD_H__

#include <rtthread.h>
#include <stm32f4xx.h>

/* whether use board external SRAM memory */
// <e>Use external SRAM memory on the board
// 	<i>Enable External SRAM memory
#define STM32_EXT_SRAM          0
//	<o>Begin Address of External SRAM
//		<i>Default: 0x60000000
#define STM32_EXT_SRAM_BEGIN    0x60000000 /* the begining address of external SRAM */
//	<o>End Address of External SRAM
//		<i>Default: 0x60080000
#define STM32_EXT_SRAM_END      0x600FFFFF /* the end address of external SRAM */
// </e>

// <o> Internal SRAM memory size[Kbytes] <8-128>
//	<i>Default: 64
#define STM32_SRAM_SIZE         128
#define STM32_SRAM_END          (0x20000000 + STM32_SRAM_SIZE * 1024)

// #define RT_USING_UART1
// #define RT_USING_UART2
#define RT_USING_UART3

// <o> Console on USART: <0=> no console <1=>USART 1 <2=>USART 2 <3=> USART 3
// 	<i>Default: 1
#define STM32_CONSOLE_USART		3

void rt_hw_board_init(void);
rt_uint32_t rt_hw_tick_get_millisecond(void);
rt_uint32_t rt_hw_tick_get_microsecond(void);

void rt_hw_usart_init(void);

#endif

// <<< Use Configuration Wizard in Context Menu >>>
