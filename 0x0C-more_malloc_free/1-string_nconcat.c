#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @s1:string 1
 * @s2:string 2
 * @n:size
 * Return:always 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, l, k = 0;

	while(*(s1 + i) != '\0')
	{
		i++;
	}
	while(*(s2 + j) != '\0')
	{
		j++;
	}
	if (n < j)
	{
		s = malloc(sizeof(char) * (i + n + 1));
	}
	else
	{
		s = malloc(sizeof(char) * (i + j + 1));
	}
	if (!s)
	{
		return (NULL);
	}
	for (l = 0; l < i; l++)
	{
		*(s + l) = *(s1 + l);
	}
	if (n < j)
	{
		for (; l < (i + n); l++)
		{
			*(s + l) = *(s2 + k);
			k++;
		}
	}
	else 
	{
		for (; l < (i + j); l++)
		{
			*(s + l) = *(s2 + k);
			k++;
		}
	}
	*(s + l) = '\0';
	return (s);
}
