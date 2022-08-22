#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1.
 * Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int Fd;

	if (filename == NULL)
    {
		return (-1);
    }
	if (text_content != NULL)
	{
		return (1);
	}

    Fd = open(filename, O_APPEND | O_WRONLY);
    for (int i = 0; text_content[i] != '\0'; i++)
    {
        if (write(Fd, &text_content[i], 1) == -1 )
            close(Fd);
            return (-1);
    }
    close(Fd);
	return (1);
}