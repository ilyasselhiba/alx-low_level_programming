#include "main.h"
#include <unistd.h>
/**
 * _putchar - the true write character's on c into stdout
 * @c: character into of to the print
 * Return: on success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
