#include "main.h" /** Custom header file */

/**
 * print_alphabet - print alphabets "a..z"
 *
 * Return: Always 0 -> (Success)
 */

int print_alphabet(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int size = sizeof(letters);
	int i;

	for (i = 0; i < size; i++)
	{
		_putchar(letters[i]);
	}
	_putchar("\n");
	return (0);
}
