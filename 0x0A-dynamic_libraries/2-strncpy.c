#include "main.h"

/**
 * _strncpy - funcation that copies a string
 * @dest: string one
 * @src: string two
 * @n: n
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; src[i] ; i++)
	{
		if (n > i)
		dest[i] = src[i];
	}
	for ( ; n > i ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
