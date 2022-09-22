#include "main.h"

/**
 * print_square - will print a square in term
 * @size: size of square
 * Return: Always (0)
 */
void print_square(int size)
{
	int i;
	int n;

	if (size <= 0)
		_putchar('\n');
	else
	{
	for (i = 0 ; i < size ; i++)
	{
		for (n = 0 ; n < size ; n++)
		{
			_putchar(35);
		}
		_putchar(10);
	}
	}
}

