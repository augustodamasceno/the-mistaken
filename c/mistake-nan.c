/* The Mistaken - NaN Manipulation
 *
 * Copyright (c) 2023, Augusto Damasceno.
 * All rights reserved.
 * 
 * SPDX-License-Identifier: BSD-2-Clause
 */

/* The Mistaken - Utils
 *
 * Copyright (c) 2023, Augusto Damasceno.
 * All rights reserved.
 * 
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "utils.h"

int main(){
	double one = 1;
	double seven = 7;
	double nan = NAN;
	long long int non_floating = nan; 
	union DoubleLongLong dll;
	dll.ll = non_floating;
	
	printf("one:               ");
	print_hex_double(one);
	
	printf("seven:             ");
	print_hex_double(seven);

	printf("nan:               ");
	print_hex_double(nan);

	nan /= 0.1;
	printf("nan /= 0.1:        ");
	print_hex_double(nan);

	printf("nan->non_floating: ");
	printf("0x%llx\n", non_floating);

	printf("nan->non_floating: %e", dll.d);
	
	return 0;
}

