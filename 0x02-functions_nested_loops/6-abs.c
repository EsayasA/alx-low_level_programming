#include "main.h"
#include <stdio.h>
/**
 * _abs - computes the absolute value of an integer
 * @n:the vlue to be computed
 * Return:abs of the number
 */
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (-1 * n);
}
