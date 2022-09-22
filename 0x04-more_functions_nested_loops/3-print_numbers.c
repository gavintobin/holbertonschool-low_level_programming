#include "main.h"

/**
 *  print_numbers - prints zero throuh nine w new line
 *  @i: int for numbers
 *  Return: Always (0)
 */

void print_numbers(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		_putchar(i);
	}
	{
		_putchar('\n');
	}
}
