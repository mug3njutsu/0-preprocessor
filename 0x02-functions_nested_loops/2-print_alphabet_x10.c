#include "main.h"

/**
 * print_alphabet - print alphabets "a..z"
 *
 * Return: Always 0 -> (Success)
 */

void print_alphabet_x10(void)
{
    int a = 0, i;

    while ( a < 10 )
    {
        for (i = 'a'; i <= 'z'; i++)
        {
            _putchar(i);
        }
        _putchar('\n');
        a++;
    }
}
