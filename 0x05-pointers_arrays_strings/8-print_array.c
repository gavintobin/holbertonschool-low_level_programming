#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elements of an array of ints
 * @a: int one
 * @n: int two
 * Return:  Always (0)
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d, ", *a);
		 a++;
	}
	printf("\n");
}

