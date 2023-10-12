#include "lists.h"

/**
 * add_dnodeint_end - Adds node at end
 * @h: A pointer to head
 * @n: The integer.
 * Return: If fails - NULL.Otherwise - the address
 */
dlistint_t *add_dnodeint_end(dlistint_t **h, const int n)
{
	dlistint_t *new, *end;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*h == NULL)
	{
		new->prev = NULL;
		*h = new;
		return (new);
	}

	end = *h;
	while (end->next != NULL)
		end = end->next;
	end->next = new;
	new->prev = end;

	return (new);
}
