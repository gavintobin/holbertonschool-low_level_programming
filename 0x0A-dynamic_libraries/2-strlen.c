#include "main.h"
#include <string.h>

/**
 * _strlen - returns length of string
 * @s: first op and oint
 * Return: Always (0)
 */

int _strlen(char *s)
{
	int index = 0;

	while (*s != '\0')
	{
		index++;
		s++;
	}
	return (index);
}
