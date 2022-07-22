#include "main.h"

/**
 * _memset - main
 * @s: *p -> memory to be filled
 * @b: char
 * @n: n bytes
 * Return: bin
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
