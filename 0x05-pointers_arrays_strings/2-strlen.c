#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: char
 * Return: length of string
 */

int _strlen(char *s)
{
int i = 0, count = 0;

while (*s[i++] != "\0")
{
count += 1;
}

return (count);
}
