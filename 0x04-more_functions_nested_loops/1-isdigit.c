#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: char
 * Return: 1 (Failure), 2 (Success)
 */

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)

		return (1);
	else
		return (0);
}
