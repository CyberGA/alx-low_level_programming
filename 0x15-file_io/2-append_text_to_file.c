#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content to append
 * Return: 1 if success, else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0';)
			len++;
	}

	fp = open(filename, O_WRONLY | O_APPEND);
	w = write(fp, text_content, len);

	if (fp == -1 || w == -1)
		return (-1);

	close(fp);

	return (1);
}
