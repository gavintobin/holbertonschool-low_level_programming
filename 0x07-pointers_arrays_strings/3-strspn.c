#include "main.h"

/**
 * _strspn - function that gets the length of a prefix
 * @s: segment initally
 * @accept: where bytes are taken from
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int counter = 0;

	if (s == NULL || accept == NULL)
		return (0);

	for (i = 0 ; s[i] ; i++)
	{
		for (j = 0 ; accept[j] ; j++)
		{
			if (s[i] == accept[j])
			{
			counter++;
			break;
			}
			else if (*(accept + j + 1) == '\0')
			{
			return (counter);
			}
		}
	}
	return (counter);
}

