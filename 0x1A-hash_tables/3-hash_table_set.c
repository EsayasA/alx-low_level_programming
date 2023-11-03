#include "hash_tables.h"
/**
 * hash_table_set - that adds function
 * @h:pointer
 * @k:key
 * @v:value
 * Return:return 1 or 0
 */
int hash_table_set(hash_table_t *h, const char *k, const char *v)
{
	unsigned long int indx = 0;
	char *vcopy, *kcopy;
	hash_node_t  *bucket, *new_node;

	if (!h || !k || !*k || !v)
		return (0);

	vcopy = strdup(v);
	if (!vcopy)
		return (0);

	indx = key_index((const unsigned char *)k, h->s);
	bucket = h->arr[indx];

	while (bucket)
	{
		if (!strcmp(k, bucket->k))
		{
			free(bucket->v);
			bucket->v = vcopy;
			return (1);
		}
		bucket = bucket->next;
	}
	new_node = calloc(1, sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(vcopy);
		return (0);
	}
	kcopy = strdup(k);
	if (!kcopy)
		return (0);
	new_node->k = kcopy;
	new_node->v = vcopy;
	new_node->next = h->arr[indx];
	ht->arr[indx] = new_node;
	return (1);
}

