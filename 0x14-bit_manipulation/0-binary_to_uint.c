#include "main.h"
/**
 * binary_to_uint - converts a bin num to unsigned int yh
 * @b: string containing bin num
 * Return: converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int lo;
	unsigned int dec_value = 0;

	if (!b)
		return (0);

	for (lo = 0; b[lo]; lo++)
	{
		if (b[lo] < '0' || b[lo] > '1')
			return (0);
	alue = 2 *alue + (b[lo] - '0');
	}

	return alue);
}
