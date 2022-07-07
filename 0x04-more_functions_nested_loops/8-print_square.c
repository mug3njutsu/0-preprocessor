#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: int
 */

void print_square(int size)
{
	int a, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 1; b <= size; b++)
		{
			_putchar('#');
			for (a = 2; ro <= size; a++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
