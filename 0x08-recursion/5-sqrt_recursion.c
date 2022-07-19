#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - sqrt
 * @n: int
 * @val: sqrt
 * Return: stuff
 */

int sqrt_recurse(int n, int val)
{

	if (val * val == n)
		return (val);
	else if (val * val < n)
		return (sqrt_recurse(n, val + 1));
	else
		return (-1);

}
