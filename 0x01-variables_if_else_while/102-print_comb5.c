#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: (0)
 */
int main(void)
{
	int num, inside_num;

	for (num = 0; num <= 99; num++)
	{
		for (inside_num = 0; inside_num <= 99; inside_num++)
		{
			if (num < inside_num)
			{
				putchar((num / 10) + 48);
				putchar((num % 10) + 48);
				putchar(' ');
				putchar((inside_num / 10) + 48);
				putchar((inside_num % 10) + 48);
				if (num != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
