#include "main.h"

/**
 * _puts_recursion - prints a string followed by new line
 * @s: pointer to string s
 * Return: (0)
 */

void _puts_recursion(char *s)
{
	int i;

	for ( i = 0 ; s[i] ; i++)
	{
		_putchar(s[i]);
	}
	_putchar(10);
}
