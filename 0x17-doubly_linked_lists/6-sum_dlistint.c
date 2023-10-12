#include "lists.h"

/**
 * sum_dlistint - Sums of the datas
 * @h: The head
 * Return: The sum of all the data.
 */
int sum_dlistint(dlistint_t *h)
{
	int result = 0;

	while (h)
	{
		result += h->n;
		h = h->next;
	}

	return (result);
}
