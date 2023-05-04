#include "main.h"
/**
 * get_endianness - checks if the
 * machine it is little or it is big endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int j = 1;
	char *h = (char *) &j;

	return (*h);
}
