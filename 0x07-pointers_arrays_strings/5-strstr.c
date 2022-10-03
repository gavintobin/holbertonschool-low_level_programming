#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string given
 * @needle: substring given
 * Return: beginning of located substring , null if not found
 */

char  *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i])
	{
		j = 0;
		while (needle[j])
		{
			if (haystack[i] == needle[j])
				return (needle);
			j++;
		}
		i++;
	}
	return (NULL);
}

