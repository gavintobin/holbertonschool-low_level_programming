#include "main.h"

/**
 * more_numbers -  prints fourteen numbers ten times as stated
 * Return: Always (0)
 */

void more_numbers(void)
{
	int i = 0;
	int n = 0;

	for (n = 0 ; n < 10 ; n++)
	{
		for (i = 0 ; i <= 14 ; i++)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');
	}
}
