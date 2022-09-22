#include "main.h"
/**
 * print_diagonal - wil print diagonal line on terminal
 * @n: number of times char will be printed
 * Return: Always (0)
 */
void print_diagonal(int n)
{
	int i;
	int d;

	if (n <= 0)
		_putchar(10);
	else
	{
	for (i = 0 ; i < n ; i++)
	{
		for (d = 0 ; d < i ; d++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar(10);
	}
	}
}
