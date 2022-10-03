#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates a character in string
 * @s: string given
 * @c: character given
 * Return: c if charcter , null if null , 0 when done
 */

char *_strchr(char *s, char c)
{
	int i = 0;
	int j;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	if ( s[i] == c)
	{
		for (j = 0 ; j < i ; j++)
		{
			s++;
		}
		return (s);
	}
	else
		return (NULL);
}
