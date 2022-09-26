#include "main.h"

/**
 * print_rev - prints a string in reverse followed by new line
 * @s: character to use
 * Return: Always (0)
 */

void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	s--;
	while (*s)
	{
	_putchar(*s);
	s--;
	}
	_putchar(10);
}
