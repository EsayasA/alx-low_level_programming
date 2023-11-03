#include "hash_tables.h"
/**
 * hash_table_set - update
 * @ht:pointer
 * @key:key
 * @value:value
 * Return:0 or 1
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *n;
	char *copy;
	unsigned long int indx, j;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	vcopy = strdup(value);
	if (vcopy == NULL)
		return (0);

	indx = key_index((const unsigned char *)key, ht->size);
	for (j = indx; ht->array[j]; j++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = vcopy;
			return (1);
		}
	}

	n = malloc(sizeof(hash_node_t));
	if (n == NULL)
	{
		free(vcopy);
		return (0);
	}
	n->key = strdup(key);
	if (n->key == NULL)
	{
		free(n);
		return (0);
	}
	new->value = vcopy;
	n->next = ht->array[indx];
	ht->array[indx] = n;

	return (1);
}
