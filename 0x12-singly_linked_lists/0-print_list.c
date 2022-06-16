#include "lists.h"
#include <stdio.h>
/**
 * print_list - Prints all the elements of a list_t list
 * @h: The list_t list to be printed
 * Return: The number or nodes
 */
size_t print_list(const list_t *h)
{
	list_t *temp;
	size_t i;

	if (h)
		i = 1;
	else
		i = 0;
	temp = NULL;
	temp = malloc(sizeof(list_t));
	if (h->str)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] (nil)\n");
	if (temp)
		temp = h->next;
	while (temp)
	{ i++;
		if (temp->str)
			printf("[%d] %s\n", temp->len, temp->str);
		else
			printf("[0] (nil)\n");
		temp = temp->next;
	}
	free(temp);
	return (i);
}
