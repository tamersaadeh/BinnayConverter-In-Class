/*
 * main.c
 *
 *  Created on: 17 Apr 2012
 *      Author: tamer
 */

#include <stdio.h>

char* toBinarySNM(long decimal) {
	// variables
	static char binary[1000];
	int k = 0, n = 0;
	int negative = 0;
	int remain;
	char temp[strlen(binary)];

	// take care of negative input
	if (decimal < 0) {
		decimal = -decimal;
		negative = 1;
	}

	while (decimal > 0) {
		remain = decimal % 2;
		decimal = decimal / 2;
		temp[k++] = remain + '0';
	}

	//using sign and magnitude

	if (negative)
		temp[k++] = '1';
	else
		temp[k++] = '0';

	// reverse the spelling
	while (k >= 0)
		binary[n++] = temp[--k];

	binary[n - 1] = 0;
	return binary;
}

int main() {

}

