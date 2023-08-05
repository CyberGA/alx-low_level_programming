#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two number
 * @argc: argument count
 * @argv: argument vector
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{
	int i, j, num, result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		result += num;
	}

	printf("%d\n", result);
	return (0);
}
