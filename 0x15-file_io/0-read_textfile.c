#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i;
	int read_letters;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buf);
		return (0);
	}

	read_letters = read(fd, buf, letters);
	if (read_letters == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	for (i = 0; i < read_letters; i++)
	{
		if (write(STDOUT_FILENO, &buf[i], 1) == -1)
		{
			close(fd);
			free(buf);
			return (0);
		}
	}
	close(fd);
	free(buf);
	return (read_letters);
}