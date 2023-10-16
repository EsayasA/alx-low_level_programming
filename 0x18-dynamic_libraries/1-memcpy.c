#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - unction that copies memory area
 * @dest:destination
 * @src:sources
 * @n:number
 * Return:edst
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
