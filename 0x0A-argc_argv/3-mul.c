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
	int multiplicand, multiplier, result;
	if (argc == 3)
	{
		printf("Error\n");
		return (1);
	}

	multiplicand =  atoi(argv[1]);
	multiplier = atoi(argv[2]);
	result = multiplicand * multiplier;
	printf("%d\n", result);
	return (0);
}
