#include "main.h"
/**
 * _isalpha - checks for alphabetic chatacter
 * @c:the character to be checked
 * Return:1 for upper or lower case 0 for else
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
return (0);
}
