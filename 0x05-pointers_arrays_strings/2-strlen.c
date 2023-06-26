#include "main.h"
#include <stdio.h>
/**
 * _strlen - the length of a string.
 * @s:input string
 * @Return:length of the string
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
