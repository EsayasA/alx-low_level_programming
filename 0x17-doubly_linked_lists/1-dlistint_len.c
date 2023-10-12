#include "lists.h"

/**
 * dlistint_len - Counting number of element
 * @head: The head
 * Return: no of elements
 */
size_t dlistint_len(const dlistint_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}

	return (count);
}
