#include "main.h"

/**
 * _isupper - checks for uppercase characters
 * @c: int for number
 * Return: (1) uppercase  (0) else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
