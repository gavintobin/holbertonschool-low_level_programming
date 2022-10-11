#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function
 * @str: pointer to string
 * Return: pointer
 */

char *_strdup(char *str)
{
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	copy = (char *) malloc(_strlen(str) * sizeof(char) + 1);
	if (copy == NULL)
	{
		free(copy);
		return (NULL);
	}
	_strcpy(copy, str);
	return (copy);
}
/**
 * _strlen - function
 * *@s: first operand & pointer
 * Return: 0
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
/**
 * _strcpy -function
 * @src: copy from
 * @dest: copy too
 * Return: char
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



