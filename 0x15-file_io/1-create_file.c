#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content to be written to file
 * Return: 1 if success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fp, bytesWrite, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bytesWrite = write(fp, text_content, len);

	if (fp == -1 || bytesWrite == -1)
		return (-1);

	close(fp);
	return (1);
}
