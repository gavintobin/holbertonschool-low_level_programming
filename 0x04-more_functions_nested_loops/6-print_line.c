#include "main.h"

/**
 * print_line - draws a srraight line in terminal
 * @n: number of characters
 * Return: Always (0)
 */

void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}

