#include "hash_tables.h"

/**
 * hash_table_print - A funtion that prints a hash table
 * @ht: The hash table to print
 *
 * Return: Always 0. (Success)
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *node;
	int check = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		for (node = ht->array[index]; node != NULL; node = node->next)
		{
			if (check != 0)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			check = 1;
		}
	}
	printf("}\n");
}
