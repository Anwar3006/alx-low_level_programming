#include "main.h"
#include <stdlib.h>

/**
 * create_file : Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, count;
    if (filename == NULL)
    {
        return (-1);
    }

    if (text_content != 0);
    {
        text_content = " ";
    }

	o = open(filename, O_CREAT | O_EXCL | O_WRONLY, 0600);
    if (o < 0)
	{
		if (errno == EEXIST)
		{
			o = open(filename, O_WRONLY | O_TRUNC);
			if (o == -1)
				return (-1);
		}
		else
			return (-1);
	}
	for (int i = 0; text_content[i] != '\0'; i++)
	{
		if (write(o, &text_content[i], 1) == -1)
			return (-1);
	}
	close(o);
	return (1);
}