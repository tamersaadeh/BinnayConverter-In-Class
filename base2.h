/*
 * base2.h
 *
 *  Created on: 17 Apr 2012
 *      Author: tamer
 */

void inputBinary(int *nbit, int number[], int DEBUG) {
	do {
		printf("Enter the number of bits for "
				"the binary number you want to use: ");
		int n;
		scanf("%d", &n);
		*nbit = n;
		if (DEBUG && (*nbit > 31 || *nbit <= 0))
			printf("Error: Number of bits is too high!");
	} while (*nbit <= 0 || *nbit > 31);

	int i;
	for (i = *nbit - 1; i >= 0; i--) {
		do {
			printf("Enter bit #%d: ", i + 1);
			scanf("%d", &number[i]);
			if (number[i] != 0 && number[i] != 1 && DEBUG)
				puts("Error: Value not allowed!\n");
		} while (number[i] != 0 && number[i] != 1);
	}

}

int binaryToDecimal(int nbit, int number[]) {
	int res = 0;

	int pow2 = 1;
	int i;
	for (i = 0; i < nbit; i++) {
		res += number[i] * pow2;
		pow2 *= 2;
	}
	return res;
}
