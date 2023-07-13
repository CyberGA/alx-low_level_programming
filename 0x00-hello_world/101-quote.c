#include <unistd.h>

/**
 * main - prints a sentence without using printf and puts
 *
 * Return: 1
 */
int main(void)
{
	char sentence[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	write(2, sentence, sizeof(sentence) - 1);
	return (1);
}
