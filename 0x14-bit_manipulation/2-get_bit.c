#include "main.h"


/**
 * get_bit - value of bit at index
 * @index: index
 * @n:value
 * Return: val or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bitstat;


	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	bitstat = (n >> index) & 1;
	return (bitstat);
}
