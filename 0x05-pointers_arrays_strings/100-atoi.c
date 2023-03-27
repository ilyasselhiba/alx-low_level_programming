#include "main.h"
/**
 * Convert a string representing an integer to an integer value.
 * 
 * @param str The string to convert.
 * @return The integer value represented by the string.
 */
int _atoi(char *s)
{
int sign = 1;
unsigned int num = 0;
do {
if (*s == '-')
sign *= -1;
else if (*s >= '0' && *s <= '9')
num = (num * 10) + (*s - '0');
else if (num > 0)
break;
} while (*s++);
return (num *sign);
}
