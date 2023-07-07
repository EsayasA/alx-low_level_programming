#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk -  that searches a string for any of a set of bytes
 * @s:string
 * @accept:aceepted
 * Return:char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
