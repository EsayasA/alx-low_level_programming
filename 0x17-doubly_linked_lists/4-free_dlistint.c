#include "lists.h"

/**
 * free_dlistint - Frees the list.
 * @h: The head.
 */
void free_dlistint(dlistint_t *h)
{
	dlistint_t *temp;

	while (h)
	{
		temp = h->next;
		free(h);
		h = temp;
	}
}
