#include "main.h"

/**
 * *_strncat - concats two strs
 * @dest: char
 * @src: char
 * @n: n bytes to src
 * Return: stuff
 */

char *_strncat(char *dest, char *src, int n)
{
	int tamanoDest = 0, l = 0;

	while (*(dest + tamanoDest) != '\0')
	{
		tamanoDest = tamanoDest + 1;
	}

	for (l = 0; src[l] != '\0'; l++)
	{
		if (l < n)
		{
			*(dest + tamanoDest) = *(src + l);
			tamanoDest = tamanoDest + 1;
		}
		else
			break;
	}
	return (dest);
}
