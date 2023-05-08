#include "main.h"

/**
 * read_textfile - reads a textfile and
 * prints it to standard POSIX output
 *
 * @filename: file name
 * @letters: letters
 *
 * Return: 0 if filename is NULL or
 * if write fails
 * or file cannot be opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int elog, desc;

	desc = open(filename, O_RDONLY);
	char *mem = malloc(sizeof(char *) * letters);

	if (filename == NULL)
		return (0);

	if (mem == NULL)
		return (0);

	if (desc == -1)
		return (0);

	if (read(desc, mem, letters))
	{
		free(mem);
		return (0);
	}
	mem[letters] = '\0';
	elog = write(STDOUT_FILENO, mem, read(desc, mem, letters));

	if (elog > 0)
	{
		free(mem);
		close(desc);
		return (read(desc, mem, letters));
	}
	else
	{
		free(mem);
		return (0);
	}
}

