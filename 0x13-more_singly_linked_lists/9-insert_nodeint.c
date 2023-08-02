#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert the link list
 * @head:first pointor
 * @idx:index of the number
 * @n:number of adress
 * Return: Always NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current;
	unsigned int i;
	listint_t *temp = *head;

	current = malloc(sizeof(listint_t));
	if (current == NULL || head == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;
	if (idx == 0)
	{
		current->next = *head;
		*head = current;
		return (current);
	}
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			current->next = temp->next;
			temp->next = current;
			return (current);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
