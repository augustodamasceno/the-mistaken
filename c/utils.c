/* The Mistaken - Utils
 *
 * Copyright (c) 2023, Augusto Damasceno.
 * All rights reserved.
 * 
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <stdio.h>

#include "utils.h"


void print_hex_double(double d){
	size_t offset = 0;
	union DoubleBytes double_bytes;
	double_bytes.d = d;

	printf("0x");
	for (offset=sizeof(double); offset-- > 0; )
		printf("%02x", double_bytes.bytes[offset]);
	printf("\n");
}

