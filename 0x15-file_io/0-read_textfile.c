#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters read and output
 * Return: if func fails or filename is NULL 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytesRead, bytesWrite, fd;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	bytesRead = read(fd, buffer, letters);
	bytesWrite = write(STDOUT_FILENO, buffer, bytesRead);

	if (fd == -1 || bytesRead == -1 || bytesWrite == -1
			|| bytesWrite != bytesRead)
	{
		free(buffer);
		return (0);
	}
	free(buffer);
	close(fd);

	return (bytesWrite);
}
