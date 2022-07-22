#include "main.h"

/**
 * *_strchr - locates char in str
 * @s: array
 * @c: num
 * Return: stuff
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s = s + 1;
	}

	if (*s == c)
	{
		return (s);
	}

	return ('\0');
}
