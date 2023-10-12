#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node
 * @h: A pointer head
 * @index: The index node to delete.
 * Return: Upon success - 1 Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *temp = *h;

	if (*h == NULL)
		return (-1);

	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}

	if (temp == *h)
	{
		*h = temp->next;
		if (*h != NULL)
			(*h)->prev = NULL;
	}

	else
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}

	free(temp);
	return (1);
}
