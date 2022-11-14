#include "hash_tables.h"

/**
 * key_index - gives index of a key
 * @key: pointer to key
 * @size: size of key
 * Return: index key is stored in
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
