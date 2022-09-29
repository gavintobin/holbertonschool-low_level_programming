#include "holberton.h"

/**
 * reverse_array - reverses the content of an arrray of ints
 * @a: array one
 * @n: number of elements in an array
 */

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0 ; i < n / 2 ; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}

