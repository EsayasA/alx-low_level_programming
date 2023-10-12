#include "lists.h"

/**
 * get_dnodeint_at_index - Locates a node
 * @h: The head
 * @index: The node to locate.
 * Return: If not - NULL.Otherwise - the address
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (h == NULL)
			return (NULL);
		h = h->next;
	}

	return (h);
}
