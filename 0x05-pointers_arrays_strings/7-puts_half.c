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
	int mid = (len / 2);

	for(i = mid ; i <= len ; i++) 
		{
			_putchar(str[i]);
		}
	if ((i % 2) == 0)
	{
		_putchar(str[i]);
	}
	_putchar(10);
}
	
