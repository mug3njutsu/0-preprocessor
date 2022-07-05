#include "main.h" /** Custom header file */

/**
 * main - print "_putchar"
 *
 * Return: Always 0 -> (Success)
 */

int main(void)
{

	char out[] = "_putchar";
	int size = sizeof(out);
	int i;

	for (i = 0; i < size; i++)
	{
		_putchar(stderr, out[i], size);
	}
	return (0);
}
