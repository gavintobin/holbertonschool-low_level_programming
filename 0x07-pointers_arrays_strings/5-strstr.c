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
	int j = 0;

	if (needle[0] == '\0')
	{
		return (&haystack[0]);
	}
	while (haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			i++;
			j++;
			if (needle[j] == '\0')
				return (&haystack[i - j]);
		}
		else
		{
			i++;
			i = (i - j);
			j = 0;
		}
	}
	return (NULL);
}
