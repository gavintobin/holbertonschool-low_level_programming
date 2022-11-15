#include "hash_tables.h"

/**
 * hash_table_print - prints hash table
 * @ht: table
 * Return: none
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *mn;
	unsigned long int index;
	int i = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0 ; index < (ht->size) ; index++)
	{
		mn = ht->array[index];
		while (mn != NULL)
		{
			if (i >0)
				printf(", ");
			printf("\'%s\': \'%s\'", (mn->key). (mn->value));
			mn = mn->next;
			i++;
		}
	}
	printf("}\n");
}

