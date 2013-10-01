/* Copyright (c) 2013 The F9 Microkernel Project. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef LIB_PRINTF_H_
#define LIB_PRINTF_H_

#include "stdarg.h"

#define EOF     (-1)

typedef unsigned char           uint8_t;
typedef unsigned int            uint32_t;
typedef unsigned long           uint64_t;

void __l4_putchar(uint8_t chr);
void __l4_puts(char *str);
void __l4_printf(char *fmt, ...);
void __l4_vprintf(char *fmt, va_list va);

#endif /* LIB_PRINTF_H_ */
