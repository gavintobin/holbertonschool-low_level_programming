#include "main.h"

/**
 * _strcpy - copies string pointed to by src including null
 * @dest: buffer pointed to
 * @src: string pointed to
 * Return: (dest)
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
