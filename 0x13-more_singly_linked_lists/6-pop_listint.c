#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * pop_listint - deletes the link list
 * @head:first pointor
 * Return: the nodes data
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	current = (*head)->next;
	free(*head);
	*head = current;
	return (num);
}
