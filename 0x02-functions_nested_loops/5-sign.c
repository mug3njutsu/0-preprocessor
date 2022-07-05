#include "main.h"

/**
 * print_alphabet_x10 - print alphabets "a..z"
 *@n: int
 * Return: Always 0 -> (Success)
 */

int print_sign(int n)
{
    if (n > 0)
    {
        _putchar('+');
        return (1);
    } else if (n == 0)
    {
        _putchar(48);
        return (0);
    } else if (n < 0)
    {
        _putchar('-');
    }
        return (-1);
}
