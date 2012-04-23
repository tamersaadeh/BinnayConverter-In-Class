/*
 * main.c
 *
 *  Created on: 17 Apr 2012
 *      Author: tamer
 */

#include <stdio.h>

#include "base2.h"

#define DEBUG 1

int main() {

	if (DEBUG) {
		int binArr[31];
		int size;

		inputBinary(&size, binArr, DEBUG);
		int i;

		printf("The number received: ");
		for (i = size - 1; i >= 0; i--) {
			printf("%d", binArr[i]);
		}
		printf("\n");
		int decimal = binaryToDecimal(size, binArr);
		printf("Decimal value: %d\n", decimal);
	}

	return 0;
}
