#include <unistd.h>

/**
 * _putchar - stdout
 * @c: char
 * Return: stuff
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}