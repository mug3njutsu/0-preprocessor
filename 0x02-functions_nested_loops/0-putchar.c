#include "main.h" /** custom header file */

/**
 * main - prints "_putchar"
 *
 * Return: Always 0 -> (Success)
 */

int main(void)
{
	char out[] = "_putchar"; /** string */
	int i;

	for (i < 0; i < (sizeof(out)); i++) /** loop through chars */
	{
		_putchar(out[i]); /** stdout */
	}

	return (0);
}
