#include <stdio.h>
#include  "main.h"
/**
 * print_sign - prints signs of a number
 * Return: (1) greater than zero (0) zero (-1) less than zero
 * @n: any numbers
 */
int print_sign(int n)
{
	if (n > 0)
	{

		_putchar('+');
			return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
			return (-1);

	}
	else if (n == 0)
	{
		_putchar('0');
			return (0);
	}
	return (0);
}


