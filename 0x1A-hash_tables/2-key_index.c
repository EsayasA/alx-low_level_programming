#include "hash_tables.h"
/**
 * key_index - find index
 * @key:key value
 * @s:size of the table
 * Return:index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int s)
{
	return (hash_djb2(key) % s);
}
