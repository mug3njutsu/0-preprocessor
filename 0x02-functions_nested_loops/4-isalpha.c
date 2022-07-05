#include "main.h"

/**
 * _isalpha - prints 1 if c is lowercase and 0 if otherwise
 *@c: char
 * Return: Always 0 -> (Success)
 */

int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'));
}
