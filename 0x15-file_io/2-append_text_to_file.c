#include "main.h"

/**
 * append_text_to_file - append text to the end of the file
 *
 * @filename: file name
 * @text_content: content to be appendeed
 *
 * Return: 1 on success and -1 on failure
 * If text_content is NULL, do not add anything to the file.
 * Return 1 if the file exists and -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, ins, slen = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[slen])
			slen++;
	}
	op = open(filename, O_WRONLY | O_APPEND);
	ins = write(op, text_content, len);

	if (op < 0 || ins < 0)
		return (-1);
	close(op);

	return (1);
}
