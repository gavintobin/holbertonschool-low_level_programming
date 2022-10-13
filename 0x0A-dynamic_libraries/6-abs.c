#include <stdio.h>
#include "main.h"
/**
 *  _abs - computes absolute value of integer
 *  Return: (0) success -(n) number (n) else
 *  @n: value of number
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
