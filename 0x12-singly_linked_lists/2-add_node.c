#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: The list to be modified
 * @str: char to be added to the list
 * Return: The modified list
 */
list_t *add_node(list_t **head, const char *str)
{ unsigned int i;
	list_t *new_head;

	for (i = 0; str[i]; i++)
		;
	new_head = NULL;
	new_head = malloc(sizeof(list_t));
	if (new_head)
	{
		new_head->str = strdup(str);
		new_head->len = i;
		new_head->next = NULL;
		new_head->next = *head;
		*head = new_head;
		return (new_head);
	}
	else
		return (NULL); }
