#include <main.h>

/**
 * main - prints "_putchar"
 *
 * Return: Always 0 -> (Sucess)
 */

int main(void)
{
	char out[] = "_putchar";
	int i;

	for (i < 0; i < (sizeof(out)); i++)
	{
		putchar(out[i]);
	}

	return (0);
}
