#include <stdio.h>

/**
 * main - prints fibonacci number
 *
 * Return: 0
 */
int main(void)
{
	int i;
	long long fib1 = 0, fib2 = 1, sum;

	for (i = 0; i < 50; i++)
	{
		sum = fib1 + fib2;
		printf("%lld", sum);

		fib1 = fib2;
		fib2 = sum;

		if (i == 49)
			printf("\n");
		else
			printf(", ");
	}
	return (0);
}
