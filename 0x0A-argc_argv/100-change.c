#include <stdio.h>
#include <stdlib.h>

/**
 * computeChange - calculates the change
 * @num: coin value
 * Return: integer
 */
int computeChange(int num)
{
	int whole;
	int remain = 0;

	if (num >= 1 && num < 2)
	{
		whole = num / 1;
	} else if (num >= 2 && num < 5)
	{
		whole = num / 2;
		remain = num % 2;
	} else if (num >= 5 && num < 10)
	{
		whole = num / 5;
		remain = num % 5;
	} else if (num >= 10 && num < 25)
	{
		whole = num / 10;
		remain = num % 10;
	} else
	{
		whole = num / 25;
		remain = num % 25;
	}

	if (remain != 0)
	{
		return (whole + computeChange(remain));
	}

	return (whole);
}

/**
 * main - prints change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("0\n");
			return (0);
		}
	}

	printf("%d\n", computeChange(atoi(argv[1])));
	return (0);
}
