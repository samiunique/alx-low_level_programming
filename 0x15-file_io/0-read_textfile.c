#include "main.h"

/**
 * read_textfile - read file from textfile
 *
 * @filename: pointer to file.
 * @letters: number of letters it should read and print
 *
 * Return:  number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o;
	ssize_t r, w;
	char *fileSize;

	if (filename == NULL)
		return (0);
	fileSize = malloc(sizeof(char) * letters);
	if (fileSize == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, fileSize, letters);
	w = write(STDOUT_FILENO, fileSize, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(fileSize);
		return (0);
	}
	close(o);

	return (w);
}

