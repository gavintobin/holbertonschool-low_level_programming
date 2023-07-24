#include "hash_tables.h"

/**
 * hash_table_get - main function
 * @ht: var
 * @key: var
 * Return: key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *hn;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0')
{
return (NULL);
}

index = key_index((const unsigned char *)key, ht->size);

if (index >= ht->size)
{
return (NULL);
}

hn = ht->array[index];

while (hn && strcmp(hn->key, key) != 0)
{
hn = hn->next;
}

return ((hn == NULL) ? NULL : hn->value);
}
