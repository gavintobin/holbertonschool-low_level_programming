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
	int i;

	for (i = 0 ; s[i] ; i++)
	{
		if (s[i] == '\0')
		{
			return (NULL);
		}
		if (s[i] == c)
		{
			s++;
			return (s);
		}
		else
		{
			s++;
			continue;
		}
	}
	return (s);
}

