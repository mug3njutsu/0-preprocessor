#include "main.h"

/**
 * _islower - entry
 * Description: char lowercase?
 * @c: int
 * Return: bin
 */

int _islower(int c)
{
    int i = 'a';

    for (i = 'a'; i <= 'z'; i++)
    {
        if (c == i)
        {
            return (1);
        }
    }
    return (0);
}
