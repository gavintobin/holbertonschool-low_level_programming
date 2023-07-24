#include "hash_tables.h"

/**
 * hash_table_print - main function
 * @ht: var
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
unsigned long int index;
hash_node_t *hn;
int flag = 0;

if (!ht || !(ht->array))
{
return;
}
printf("{");
for (index = 0; index <= ht->size; index++)
{
hn = ht->array[index];
while (hn != NULL)
{
if (flag == 1)
{
printf(", ");
}
printf("'%s': '%s'", hn->key, hn->value);
flag = 1;
hn = hn->next;
}
}
printf("}\n");
}
