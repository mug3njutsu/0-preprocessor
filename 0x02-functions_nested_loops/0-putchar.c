#include "main.h" /** Custom header file */

/**
 * main - print "_putchar"
 *
 * Return: Always 0 -> (Success)
 */

int main(void)
{

	char out[] = "_putchar";
	char new_line = "\n";
	int size = sizeof(out);
	int a;

	for (a = 0; a < size; a++)
	{
		_putchar(out[a]);
	}
	_putchar(new_line);
	return (0);
}
