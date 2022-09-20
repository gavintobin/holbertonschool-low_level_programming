#include <stdio.h>
#include "main.h"
/**
 *  _abs - computes absolute value of integer
 *  Return: Always (0) suces
 *  @n: value of number
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;

	printf("%d", n);

return (0);
	}
