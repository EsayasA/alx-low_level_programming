#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverses a string
 * @s:input string
 * Return:void
 */
void rev_string(char *s)
{
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = i - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
