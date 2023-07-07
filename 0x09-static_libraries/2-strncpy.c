#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copy from source todes
 * @dest:destination
 * @src:source
 * @n:integer
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int k = 0;

	while (k < n && src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	while (k < n)
	{
		dest[k] = '\0';
		k++;
	}
	return (dest);
}
