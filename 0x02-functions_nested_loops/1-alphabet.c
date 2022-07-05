#include "main.h" /** Custom header file */

/**
 * print_alphabet - print alphabets "a..z"
 *
 * Return: Always 0 -> (Success)
 */

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i < 'A'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
