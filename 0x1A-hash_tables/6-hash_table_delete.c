#include "hash_tables.h"
/**
 * hash_table_delete - delete the function
 * @ht:pointer
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *hd = ht;
	hash_node_t *n, *tmp;
	unsigned long int j;

	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j] != NULL)
		{
			n = ht->array[j];
			while (n != NULL)
			{
				tmp = n->next;
				free(n->key);
				free(n->value);
				free(n);
				n = tmp;
			}
		}
	}
	free(hd->array);
	free(hd);
}
