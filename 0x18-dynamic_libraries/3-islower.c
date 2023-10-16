#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c:the chracter to be checked
 * Return: 1 for lower case character 0 for anything character
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
else
return (0);
}
