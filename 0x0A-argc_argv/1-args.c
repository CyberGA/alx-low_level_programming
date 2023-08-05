#include <stdio.h>

/**
 * main - prints argument count
 * @argc: argument count
 * @argv: argument vector
 * Return: Success (0)
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
