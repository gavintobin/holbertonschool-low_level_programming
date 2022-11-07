#include "main.h"
#include <string.h>
#include "_pow.c"
/**
 * binary_to_uint - converts binary to un int
 * @b: pointer to binary string
 * Return: 0 1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;
	unsigned int dec = 0;
	if (!b)
		return (0);
	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			dec += mypow(2, strlen(b) - i - 1);
		i++;
	}
	return (dec);
}
