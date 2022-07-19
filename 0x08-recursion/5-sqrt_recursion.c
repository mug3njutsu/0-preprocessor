#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: int
 * Return: int
 */

int sqrt_recurse(int start, int end, int m)
{
	long mid;

	if (end >= start)
	{
		mid = start + (end - start) / 2;
		if (mid * mid == m)
			return (mid);
		if (mid * mid > m)
			return (sqrt_recurse(start, mid - 1, m));
		if (mid * mid < m)
			return (sqrt_recurse(mid + 1, end, m));
	}
	return (-1);
}
/**
 * _sqrt_recursion - main
 * @n: int
 * Return: sqrt
 */

	int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (sqrt_recurse(2, n, n));
}
