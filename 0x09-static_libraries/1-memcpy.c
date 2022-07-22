#include "main.h"

/**
 * *_memcpy - copies mem area
 * @dest: array
 * @src: array
 * @n: num of elements
 * Return: stuff
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
