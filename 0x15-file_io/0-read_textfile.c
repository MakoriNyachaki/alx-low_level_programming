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
	ssize_t rd, bw;

	FILE *fl = open(filename, "r");
	char *mem = malloc(sizeof(char *) * letters);

	rd = read(fl, mem, letters);
	bw = write(STDOUT_FILENO, fl, rd);

	if (filename == NULL)
		return (0);

	if (mem == NULL)
	{
		fclose(fl);
		return (0);
	}

	if (!fl || !rd)
		return (0);

	if (rd == -1)
	{
		free(mem);
		fclose(fl);
		return (0);
	}

	free(mem);
	fclose(fl);
	if (bw != rd)
		return (0);
	return (bw);
}
