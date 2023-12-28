/* The Mistaken - Utils
 *
 * Copyright (c) 2023, Augusto Damasceno.
 * All rights reserved.
 * 
 * SPDX-License-Identifier: BSD-2-Clause
 */

#ifndef _UTILS_H
#define _UTILS_H

union DoubleBytes {
	double d;
	unsigned char bytes[sizeof(double)];
};

union DoubleLongLong{
	double d;
	long long int ll;
};

void print_hex_double(double d);

#endif /* _UTILS_H  */

