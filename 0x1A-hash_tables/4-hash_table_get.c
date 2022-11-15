#include "hash_tables.h"

/***
 * hash_table_get - retrieves a value associated with ky
 * @ht: table
 * @key: key pointer
 * Return: value associated with elem
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tn;
	unsigned long int i;

	if (ht == NULL)
		return (NULL);

	if (key == NULL || (strcmp(key, "") == 0))
		return (NULL);
	i = (hash_djb2((const unsigned char *)key) % (ht->size));
	tn = ht->array[i];

	while (tn)
	{
		if (strcmp(key, tn->key) == 0)
		{
			return (tn->value);
		}
		tn = tn->next;
	}
	return (NULL);
}
