#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file p
 * @filename: text file being read
 * @letters: the number of letters
 * Return: fnh- actual num of bytes
 * 0 when function fails or file-name NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bugt;
	ssize_t ft;
	ssize_t fnh;
	ssize_t l;

	ft = open(filename, O_RDONLY);
	if (ft == -1)
		return (0);
	bugt = malloc(sizeof(char) * letters);
	l = read(ft, bugt, letters);
	fnh = write(STDOUT_FILENO, bugt, l);

	free(bugt);
	close(ft);
	return (fnh);
}
