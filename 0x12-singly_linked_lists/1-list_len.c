#include "lists.h"
/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: The list to be counted
 * Return: Number of elements
 */
size_t list_len(const list_t *h)
{
	size_t i;
	list_t *temp;

	if (h)
	{ i = 1;
		temp = NULL;
		temp = malloc(sizeof(list_t));
		if (temp)
		{ temp = h->next;
			while (temp)
			{ i++;
				temp = temp->next; } }
		free(temp); }
	else
		i = 0;
	return (i); }
