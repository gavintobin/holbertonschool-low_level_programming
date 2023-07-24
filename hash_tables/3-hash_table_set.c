#include "hash_tables.h"

/**
 * hash_table_set - main function
 * @ht: var
 * @key: var
 * @value: var
 * Return: int
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new;
char *keycopy;
unsigned long int index, i;
if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
{
return (0);
}
keycopy = strdup(value);
if (keycopy == NULL)
{
return (0);
}
index = key_index((const unsigned char *)key, ht->size);
for (i = index; ht->array[i]; i++)
{
if (strcmp(ht->array[i]->key, key) == 0)
{
free(ht->array[i]->value);
ht->array[i]->value = keycopy;
return (1);
}
}
new = malloc(sizeof(hash_node_t));
if (new == NULL)
{
free(keycopy);
return (0);
}
new->key = strdup(key);
if (new->key == NULL)
{
free(new);
return (0);
}
new->value = keycopy;
new->next = ht->array[index];
ht->array[index] = new;

return (1);
}
