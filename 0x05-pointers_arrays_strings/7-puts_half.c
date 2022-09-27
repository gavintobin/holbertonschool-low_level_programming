#include "main.h"
#include <string.h>

/**
 * puts_half - prints half a string
 * @str: sting name
 * Return: Always (0)
 */

void puts_half(char *str)
{
	int i;
	int len = strlen(str);
	int mid = len / 2;

	for(i = mid ; mid <= len ; ++i) 
		{
			_putchar(*str);
			str++;
		}
	_putchar(10);
}
	
