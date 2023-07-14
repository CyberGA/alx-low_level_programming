#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: (0)
 */
int main(void)
{
	int num;
	int inside_num;

	for (num = 0; num <= 9; ++num)
	{
		for (inside_num = 0; inside_num <= 9; ++inside_num)
		{
			putchar(num + '0');
			putchar(inside_num + '0');
			if (num != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
