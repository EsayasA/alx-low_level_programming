#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint -  prints all the elements of a listint_t list.
 * @h:head
 * Return:number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t size = 0;

	while (h)
	{
		printf("%d\n", h->n);
		size++;
		h = h->next;
	}
	return (size);
}
