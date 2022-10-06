#include "main.h"

/**
 * _pow_recursion(int x, int y)
 * @x: int one
 * @y: int two
 * Return: -1 if neg
 */


int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y < 0)
		return (-1);
	else
		return (1);
}
