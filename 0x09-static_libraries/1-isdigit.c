#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: defines char
 * Return: (1) if digit (0) else
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
