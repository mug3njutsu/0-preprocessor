#include "main.h"

/**
 * _strpbrk - locates a substring
 * @s: str
 * @accept: bytes
 * Return: stuff
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
