#include "main.h"

/**
 * *_memset - fills mem(constant byte)
 * @s: array
 * @b: num
 * @n: num
 * Return: char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
