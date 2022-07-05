#include "main.h" /** Custom header file */

/**
 * main - print alphabets "a..z"
 *
 * Return: Always 0 -> (Success)
 */

int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz\n";
	int size = sizeof(letters);
	int i;

	for (i = 0; i < size; i++)
	{
		print_alphabet(letters[i]);
	}
	return (0);
}
