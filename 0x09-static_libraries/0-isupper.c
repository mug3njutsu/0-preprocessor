#include "main.h"

/**
 * _isupper - checks for upper
 * @c: int
 * Return: bin
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}