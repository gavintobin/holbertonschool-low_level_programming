#include "hash_tables.h"

/**
 * hash_table_set - adds elements o hash table
 * @ht: table
 * @key: key pointer
 * @value: val
 * Return: 1 0
 */


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *nn, *tn;
	unsigned long int i;

	if (ht == NULL)
		return (0);
	i = (hash_djb2((const unsigned char *) key) % (ht->size));
	if (key == NULL || value == NULL  || (strcmp(key, "") == 0))
		return (0);
	if (ht->array[i] == NULL)
	{
		nn = malloc(sizeof(hash_node_t));
		
		if (nn == NULL)
		return (0);
		ht->array[i] = nn;
		nn->key = (strdup(key));
		nn->value = (strdup(value));
		nn->next = NULL;
		return (1);
	}
	tn = ht->array[i];
	while (tn)
	{
		if (strcmp(key, tn->key) == 0)
		{
			free(tn->value);
			tn->value = (strdup(value));
			return (1);
		}
		tn = tn->next;
	}
	tn = ht->array[i];
	while (tn)
	{
		nn = malloc(sizeof(hash_node_t));
		if (nn == NULL)
			return (0);
		ht->array[i] = nn;
		nn->key = (strdup(key));
		nn->value = (strdup(value));
		nn->next = tn, ht->array[i] = nn;
		return (1);
	}
	return (0);
}

