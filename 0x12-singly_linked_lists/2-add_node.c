#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer 
 * @str: new string to add in the node
 * Return: the address 
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int count = 0;

	while (str[count])
		count++;
	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = count;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
