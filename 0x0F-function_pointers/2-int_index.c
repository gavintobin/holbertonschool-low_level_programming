#include "function_pointers.h"
#include <stddef.h>


/**
 * int_index - searches for integer
 * @array: array given
 * @size: size of array
 * @cmp: pointer to function
 * Return: zero , negative one
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	 int i = 0;

		if (size > 0)
		{
			if (array != NULL && cmp != NULL)
			{
				while (i < size)
				{
					if (cmp(array[i]))
					return (i);
					i++;
				}
			}
		}
		return (-1);
}


