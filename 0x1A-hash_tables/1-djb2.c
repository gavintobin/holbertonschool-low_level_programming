#include "hash_tables.h"

/**
 * hash_djb2 - implements djb2 algo
 * @str: pointer to string
 * Return: djb2
 */

unsigned long int hash_djb2(const unsigned char *str);
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}
	return (hash);
}
