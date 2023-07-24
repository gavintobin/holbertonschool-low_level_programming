#include "hash_tables.h"

/**
 * key_index - main function
 * @key: var
 * @size: var
 * Return: unsigned long int
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{

unsigned long int h;

if (size == 0)
{
return (0);
}

h = hash_djb2(key);

return (h % size);

}
