#include "holberton.h"

/**
 * _strncat - concatenates two strings
 * @dest: string one
 * @src: string two
 * @n: bytes used
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len;
	int leng;

	for (len = 0 ; dest[len] ; len++)
		;

	for (leng = 0 ; src[leng] ; leng++)
	{
		if (n > src[leng])
		{
			dest[len] = src[leng];
			len++;
		}
	}
	return (dest);
}
