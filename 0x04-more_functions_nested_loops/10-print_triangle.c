#include "main.h"

/**
 * print_triangle - prints a triangle somwhoq WHAT
 * @size: - size of trangle
 * Return: Always (0)
 */
void print_triangle(int size)
{
	int i;
	int q;

	if (size <= 0)
	{
		_putchar(10);
		return;
	}
	for (i = 0 ; i < size ; i++)
	{
		for (q = (size - 1) ; q >= 0 ; q--)
		{
			if (q > i)
				_putchar(' ');
			else
				_putchar(35);
		}
		_putchar('\n');
	}
}

