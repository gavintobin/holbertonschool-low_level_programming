#include "main.h"

/**
 * clear_bit - sets val at 0 at given index
 * @n: pointer
 * @index: index
 * Return: one neg one
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & ~(1 << index);
	return (1);
}
