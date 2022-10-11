#include "main.h"

/**
 *  _sqrt - finds square root
 *  @i: base
 *  @n: power
 *  Return: square root
 */


int _sqrt(int i, int n)
{
	if (n * n > i)
		return (-1);
	else if ( n * n == i)
		return (n);
	else
		return (_sqrt(i, n + 1));
	return (1);

}

/**
 * _sqrt_recursion - returns natural square root
 * @n: int given
 * Return: -1 if no square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (_sqrt(1, n));
}
