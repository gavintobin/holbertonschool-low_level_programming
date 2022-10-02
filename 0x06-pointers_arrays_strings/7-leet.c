#include "holberton.h"

/**
 *  leet - ecodes a string to 1337
 */

char *leet(char *s)
{
	int i;
	int j;
	char alpha[] = "AEOTLaeotl";
	char numb[] = "4307143071";


	for (i = 0 ; s[i] ; i++)
	{
		for j = 0 ; alpha[j] ; j++)
			if (s[i] = alpha[j])
			{
				s[i] = numb[j];
				/*break;*/
			}
	}
	return(s);
}
