#include "lists.h"
#include <string.h>
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: The list to be modified
 * @str: char to be added to the list
 * Return: The modified list
 */
list_t *add_node_end(list_t **head, const char *str)
{ unsigned int i;
	list_t *new_tail, *list_index;

	for (i = 0; str[i]; i++)
		;
	new_tail = NULL;
	new_tail = malloc(sizeof(list_t));
	list_index = NULL;
	list_index = malloc(sizeof(list_t *));
	list_index = *head;
	if (new_tail != NULL)
	{
		new_tail->str = strdup(str);
		new_tail->len = i;
		new_tail->next = NULL;
		while (list_index->next != NULL)
			list_index = list_index->next;
		list_index->next = new_tail;
		return (new_tail);
	}
	else
		return (NULL); }
