#include "hash_tables.h"
/**
 * hash_table_create - function
 * @s:size
 * Return:pointer
 */
hash_table_t *hash_table_create(unsigned long int s)
{
	hash_table_t *t;

	if (s == 0)
		return (NULL);

	t = calloc(1, sizeof(hash_table_t));
	if (t == NULL)
		return (NULL);

	t->s = s;
	t->arr = calloc(s, sizeof(hash_node_t *));
	if (t->arr == NULL)
	{
		free(t);
		return (NULL);
	}
	return (t);
}
