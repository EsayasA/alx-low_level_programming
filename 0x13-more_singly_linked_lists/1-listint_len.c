#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - returns the number of elements in a linke
 * @h:pointer
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		size++;
		h = h->next;
	}
	return (size);
}
