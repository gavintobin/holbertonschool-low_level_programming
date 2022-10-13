#include "main.h"
#include <string.h>

/**
 * _strcmp - function that compares two strings
 * @s1: string one
 * @s2: string two
 * Return: difference
 */

int _strcmp(char *s1, char *s2)
{
	int len;

	for (len = 0 ; s1[len] && s2[len] ;)
	{
		if (s1[len] == s2[len])
			len++;
		else
			break;
	}
	return (s1[len] - s2[len]);
}
