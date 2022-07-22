#include "holberton.h"

/**
 * *_strcat - concats two strings
 * @dest: char
 * @src: char
 * Return: stuff
 */

char *_strcat(char *dest, char *src)
{
	int tamano = 0, l = 0, tamanoFinal = 0;

	while (*(dest + tamano) != '\0')
	{
		tamano = tamano + 1;
	}

	for (l = 0; src[l] != '\0'; l++)
	{
		*(dest + tamano) = *(src + l);
		tamano = tamano + 1;
	}

	while (*(dest + tamanoFinal) != '\0')
	{
		tamanoFinal = tamanoFinal + 1;
	}

	*(dest + tamanoFinal) = '\0';

	return (dest);
}
