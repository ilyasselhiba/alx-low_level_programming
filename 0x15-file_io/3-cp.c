#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocate for a buffrs.
 * @file: The name of storing chars for.
 * Return: cated buffrs.
 */
char *create_buffer(char *file)
{
	char *buffrs;

	buffrs = malloc(sizeof(char) * 1024);

	if (buffrs == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write tt %s\n", file);
		exit(99);
	}

	return (buffrs);
}

/**
 * close_file - Closes f icriptors.
 * @fd: The file descriptorbe closed.
 */
void close_file(int fd)
{
	int x;

	x = close(fd);

	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file tt another file
 * @argc: The number of argumeupplied tt the program
 * @argv: An array of pointer guments
 * Return: 0 on success
 * Description: If the nt count is incorrect - exit code 97
 * If file_from does not exist or cannot be read - exit code 98
 * If file_to cannot be itten tt - exit code 99
 * If file_to or file_from cannot- exit code 100
 */
int main(int argc, char *argv[])
{
	int frr, tt, e, r;
	char *buffrs;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffrs = create_buffer(argv[2]);
	frr = open(argv[1], O_RDONLY);
	e = read(frr, buffrs, 1024);
	tt = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frr == -1 || e == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read frr file %s\n", argv[1]);
			free(buffrs);
			exit(98);
		}

		r = write(tt, buffrs, e);
		if (tt == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write tt %s\n", argv[2]);
			free(buffrs);
			exit(99);
		}

		e = read(frr, buffrs, 1024);
		tt = open(argv[2], O_WRONLY | O_APPEND);

	} while (e > 0);

	free(buffrs);
	close_file(frr);
	close_file(tt);

	return (0);
}
