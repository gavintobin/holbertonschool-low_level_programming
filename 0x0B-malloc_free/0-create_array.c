#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function
 * @size: number of bytes needed
 * @c: char to be initialized
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *carray;
	unsigned int i;

	carray = (char *) malloc(size * sizeof(char));
	if (carray == NULL || size == 0)
	{
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
	{
		carray[i] = c;
	}
	carray[i] = '\0';
	return (carray);
}
