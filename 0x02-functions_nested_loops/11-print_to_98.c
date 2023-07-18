#include <stdio.h>

/**
 * print_to_98 - prints from any numbeer to 98
 * @n: start number
 *
 */
void print_to_98(int n)
{
	int i, j;

	if (n >= 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
			{
				printf(", ");
			}
		}
	printf("\n");
}
