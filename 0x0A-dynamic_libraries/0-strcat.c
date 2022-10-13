#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string two
 * @src: string one
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len;
	int leng;

	for (len = 0 ; dest[len] ; len++)
		;

		for (leng = 0 ; src[leng] ; leng++)
		{
			dest[len] = src[leng];
			len++;
		}
		return (dest);

}
