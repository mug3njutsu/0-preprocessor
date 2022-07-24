#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of malloc(memory)
 * @c: char
 * Return: Always 0 -> (Success)
 */

char *create_array(unsigned int size, char c)
{

	char *arrayOfChar;
	unsigned int i;

	arrayOfChar = malloc(size);

	if (size == 0 || arrayOfChar == 0)
		return (0);

	for (i = 0; i < size; i++)
	{
		arrayOfChar[i] = c;
	}

	return (arrayOfChar);
}
