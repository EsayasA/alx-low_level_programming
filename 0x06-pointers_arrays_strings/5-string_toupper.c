#include "main.h"
#include <stdio.h>

/**
 * string_toupper - lowercase letters to uppercase
 * @n:integer
 * Return: n.
 */
char *string_toupper(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		n[i] = n[i] - 32;
		i++;
	}
	return (n);
}

