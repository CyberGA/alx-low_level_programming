#include <stdio.h>

/**
 * main - The sum of 3 and 5 multiples
 * made by Gbenga Etomu
 *
 * Return: 0
 */
int main(void)
{
	int sum = 0, i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	}
	printf("%d\n", sum);
}
