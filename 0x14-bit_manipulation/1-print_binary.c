#include "main.h"
/**
 * print_binary - prints bin equivalent of a dec num
 * @n: num to print in bin
 */
void print_binary(unsigned long int n)
{
	int io, count = 0;
	unsigned long int current;

	for (io = 63; io >= 0; io--)
	{
		current = n >> io;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
