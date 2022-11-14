#include "hash_tables_h"


/**
 * hash_table_create - function that creates hash table
 * @size: size of table
 * Return: size
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newt = malloc(sizeof(hash_table_t));
	unsigned int i;

	if (!newt)
		return (NULL);

	if (size == 0)
		return (NULL);

	newt->array = malloc(sizeof(hash_node_t *) * size);

	if (!newt->array)
	{
		free(newt);
		return (NULL);
	}
	for (i = 0 ; i < size ; i++)
		newt->array[i] = NULL;

	newt->size = size;

	return (newt);
}
