#include "lists.h"

/**
 * print_dlistint - Prints all the elements.
 * @head: The head
 * Return: nodes number.
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		printf("%d\n", head->n);
		head = head->next;
	}

	return (count);
}
