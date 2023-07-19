#include <stdio.h>

/**
 * main - prints fibonacci number
 *
 * Return: 0
 */
int main(void)
{
	int i = 0;
	unsigned long fib1 = 0, fib2 = 1, sum;

	while (i < 98)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		if (i < 97)
			printf(", ");
		fib1 = fib2;
		fib2 = sum;
		i++;
	}
	printf("\n");
	return (0);
}
