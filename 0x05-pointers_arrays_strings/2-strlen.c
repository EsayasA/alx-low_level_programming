#include "main.h"
#include <stdio.h>
/**
 * _strlen - that returns the length of a string
 * @s:input str
 * Return:length of str
 */
int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
