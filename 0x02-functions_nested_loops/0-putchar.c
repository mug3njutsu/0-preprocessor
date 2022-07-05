#include "main.h" /** Custom header file */

/**
 * main - print "_putchar"
 *
 * Return: Always 0 -> (Success)
 */

int main(void)
{

	char out[] = "_putchar";
	int a;

	for (a = 1; a < (sizeof(out)); a++)
	{
		_putchar(out[a])
	}
	return (0);
}
