#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: decimal
 */
void print_binary(unsigned long int n)
{
	unsigned long int binNum;
	int shifts;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (binNum = n, shifts = 0; (binNum >>= 1) > 0; shifts++)
		;

	for (; shifts >= 0; shifts--)
	{
		if ((n >> shifts) & 1)
			printf("1");
		else
			printf("0");
	}
}
