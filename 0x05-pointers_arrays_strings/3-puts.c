#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 * @str: chars
 */

void _puts(char *str)
{
	char a[] = *str;
	
	_putchar(a);
	_putchar('\n');
}
