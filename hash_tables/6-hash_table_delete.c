#include "hash_tables.h"

/**
 * hash_table_delete - main function
 * @ht: var
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
hash_table_t *head = ht;
hash_node_t *hn, *temp;
unsigned long int i;

for (i = 0; i < ht->size; i++)
{
if (ht->array[i] != NULL)
{
hn = ht->array[i];
while (hn != NULL)
{
temp = hn->next;
free(hn->key);
free(hn->value);
free(hn);
hn = temp;
}
}
}
free(head->array);
free(head);
}
