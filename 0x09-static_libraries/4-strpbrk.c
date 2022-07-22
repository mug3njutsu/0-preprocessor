#include "main.h"

/**
 * _strpbrk - search for string
 * @s: str
 * @accept: n bytes
 * Return: stuff
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
