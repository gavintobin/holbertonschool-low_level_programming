#include <stdio.h>
#include "main.h"
/**
 *  print_alphabet_x10 - prints ten times alphabet
 *  Return:Always (0) sucess
 */
void print_alphabet_x10(void)
{
	char c;
	char d;

	for (c = 0 ; c <= 9 ; c++)
	{
		for (d = 'a' ; d <= 'z' ; d++)
		{
			_putchar(d);
		}
		_putchar('\n');
	}
}
