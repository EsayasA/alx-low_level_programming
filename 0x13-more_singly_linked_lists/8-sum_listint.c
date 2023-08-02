#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - prints the sum
 * @head:head of the pointor
 * Return:res
 */
int sum_listint(listint_t *head)
{
	int res = 0;
	listint_t *current = head;

	while (current)
	{
		res += current->n;
		current = current->next;
	}
	return (res);
}
