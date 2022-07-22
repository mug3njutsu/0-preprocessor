#include "main.h"

/**
 * _puts - puts string + "\n"
 * @str: *p -> str
 * Return: Always 0 -> (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
