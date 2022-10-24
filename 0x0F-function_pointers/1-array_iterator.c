#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * array_iterator - executes function given as param on each element of array
 * @array: array to iterate
 * @size: size of array
 * @action: pointer to function
 * Return: none
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0 ; i < size ; i++)
		{
			array[i] = array[size];
			action(array[size]);
		}
	}
}

