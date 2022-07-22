#include "main.h"

/**
 * _strlen - len(str)
 * @s: char
 * Return: stuff
 */

int _strlen(char *s)
{
	int i = 0, tamano = 0;

	while (i != -1)
	{
		if (*(s + i) != '\0')
			tamano = tamano + 1;
		else
		{
			i = -1;
			break;
		}
		i = i + 1;
	}
	return (tamano);
}
