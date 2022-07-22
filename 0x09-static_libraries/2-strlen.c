#include "main.h"

/**
 * _strlen - checks len(str)
 * @s: str
 * Return: int
 */

int _strlen(char *s)
{
	int length = 0;

	while (s[length])
		length++;
	return (length);
}
