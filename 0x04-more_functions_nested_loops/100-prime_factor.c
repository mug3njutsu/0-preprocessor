#include <stdlib.h>

/**
 * print_number - prints the largest prime factor of the number 612852475143
 * @n: int
 * Return: 0
 */

void print_number(int n)
{
unsigned int n1;

if (n < 0)
{
n1 = -n;
printf('-');
}
else
{
n1 = n;
}

if (n1 / 10)
{
print_number(n1 / 10);
}

printf((n1 % 10) + '0');
}
