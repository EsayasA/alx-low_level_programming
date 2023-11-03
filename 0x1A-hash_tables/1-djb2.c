#include "hash_tables.h"
/**
 * hash_djb2 - name of the function
 * @str:str
 * Return:returns pointer
 */
unsigned long int hash_djb2(const unsigned char *st)
{
	unsigned long int ha;
	int c;

	ha = 5381;
	while ((c = *st++))
	{
		ha = ((ha << 5) + ha) + c;
	}
	return (ha);
}

