#include "main.h"

/**
 * _print_rev_recursion - prints reverse string
 * @s: string pointed to
 * Return: none
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
