#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: table to delete
 * Return: none
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp, *mn;

	for (i = 0 ; i < (ht->size) ; i++)
	{
		mn = ht->array[i];
		while (mn != NULL)
		{
			temp = mn->next;
			if (mn->key != NULL)
				free(mn->key);
			if (mn->value != NULL)
				free(mn->value);
			if (mn != NULL)
				free(mn);
			mn = temp;
		}
	}
	free(ht->array);
	free(ht);
}

