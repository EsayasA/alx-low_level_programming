#include "lists.h"

/**
 * add_dnodeint - Adds node at first.
 * @h: A pointer to head.
 * @n: The integer.
 * Return: If fails - NULL.otherwise the addressnode.
 */
dlistint_t *add_dnodeint(dlistint_t **h, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *h;
	if (*h != NULL)
		(*h)->prev = new;
	*h = new;

	return (new);
}
