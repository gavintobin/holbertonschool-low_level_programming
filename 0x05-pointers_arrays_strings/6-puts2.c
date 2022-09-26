#include "main.h"
#include <string.h>

/**
 *  puts2 - prints every other character of a string starting with first
 *  @str: string name
 *  Return: Always (0)
 */

void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0 ; i < len ; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
