#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copies the string pointed to by
 * @dest:will contain
 * @src:sources file
 * Return:pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
