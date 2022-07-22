#include "main.h"

/**
 * _strcmp - cmp *p -> str1 and *p > str2
 * @s1: *p -> str1
 * @s2: *p -> str2
 * Return: stuff
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
