#include  "main.h"

/**
  *getp - returns the value of x ** y.
  *@x: number.
  *@y: power.
  *Return: x ** y
  */

int getp(int x, int y)
{
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * getp(x, y - 1));
}

/**
  *set_bit - stes the value of a bit to one at a given index.
  *@n: *p -> to number.
  *@index: index of bit.
  *Return: 1 || -1
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (n && index < 64)
	{
		*n += getp(2, index);
	}
	else
	{
		return (-1);
	}
	return (1);
}
