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

	temp = h;
	i = 0;
	do { i++;
		if (temp->str)
			printf("[%lu] %s\n", temp->len, temp->str);
		else
			printf("[0] (nil)\n");
		temp = temp->next;
	} while (temp);
	return (i);
}
