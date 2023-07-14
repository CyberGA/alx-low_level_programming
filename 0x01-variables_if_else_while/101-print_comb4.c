#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: (0)
 */
int main(void)
{
	int num;
	int inside_num;
	int inner_num;

	for (num = 0; num <= 7; ++num)
	{
		for (inside_num = num + 1; inside_num <= 8; ++inside_num)
		{
			for (inner_num = inside_num + 1; inner_num <= 9; inner_num++)
			{
				putchar(num + '0');
				putchar(inside_num + '0');
				putchar(inner_num + '0');
				if (num != 7)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
