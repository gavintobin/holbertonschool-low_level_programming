#include "main.h"


/**
 * flip_bits - returns num of flips needed
 * @n: num
 * @m: int
 * Return: none
 */


unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int flip = 0;
	unsigned long int num = n ^ m;

	while (num > 0)
	{
		flip++;
		num &= (num - 1);
	}
	return (flip);
}

