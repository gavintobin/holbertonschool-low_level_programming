#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: pointer to string s
 * Return: (0)
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar(10);
	}
	else
	{
		_putchar(*s);
	_puts_recursion(s + 1);
	}
}

