#include <stdio.h>

/**
 * main - fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int j = 1, k = 2, next, sum = 0;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			sum = sum + j;
		next = j + k;
		j = k;
		k = next;
	}
	printf("%lu", sum);
}
