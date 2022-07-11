#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: chars
 */

void print_rev(char *s)
{
	char original_char;
	int i, left = 0, right, len;

	while (*s != '\0')
	{
		len++;
	}

	right = len - 1;

	for (i = left; i < right; i++)
	{
		original_char = s[i];
		s[i] = s[right];
		s[right] = original_char;
		right--;
	}
}
