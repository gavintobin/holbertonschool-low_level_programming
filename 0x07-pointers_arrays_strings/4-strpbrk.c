#include "main.h"

/**
 *  _strpbrk - searches a strin for any set of bytes
 *  @s: string given
 *  @accept: string given
 *  Return: null if no byte s is byte matches
 */

char *_strpbrk(char *s, char *accept)
{
	int j;
	int i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return (NULL);
}


