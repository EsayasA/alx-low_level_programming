#include "hash_tables.h"
/**
 * hash_table_create - hash table function
 * @s:size
 * Return: pointer
 */
hash_table_t *hash_table_create(unsigned long int s)
{
	hash_table_t *h;
	unsigned long int j;

	h = malloc(sizeof(hash_table_t));
	if (h == NULL)
		return (NULL);

	h->s = s;
	h->arr = malloc(sizeof(hash_node_t *) * s);
	if (h->arr == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		h->array[j] = NULL;

	return (h);
}
