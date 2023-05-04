#include "main.h"
/**
 * get_bit - returns the val of a bit at an ind in a dec num
 * @n: number to search
 * @index: ind of the bit
 * Return: val of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);
	bit_value = (n >> index) & 1;
	return (bit_value);
}
