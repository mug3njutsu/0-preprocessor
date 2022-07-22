#include "main.h"

/**
 * *_strcpy - copies the str pointed to by src
 * @dest: char
 * @src: char
 * Return: stuff
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
