#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: file name
 * @text_content: content to write into the file
 * in our case a NULL terminated string.
 *
 * Return: 1 success or -1 failure
 * or -1 if file name is null
 */

int create_file(const char *filename, char *text_content)
{
	int fl, len = 0;

	fl = open(filename, O_RDWR | O_CREAT | O_TRUNC);

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		while (text_content[len])
			len++;
	}

	if (fl == -1 || (write(fl, text_content, len)) == -1)
		return (-1);

	close(fl);
	return (1);
}
