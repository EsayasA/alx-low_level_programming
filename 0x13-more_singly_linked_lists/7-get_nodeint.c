#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - it gets the node of the index
 * @head:the first pointor
 * @index:the number of the node
 * Return: null or current
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j = 0;
	listint_t *current = head;

	while (current && j < index)
	{
		current = current->next;
		j++;
	}
	if (current)
		return (current);
	else
		return (NULL);
}
