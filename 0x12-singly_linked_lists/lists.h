#ifndef __LISTS__
#define __LISTS__
#include <stdlib.h>

/**
 * struct list_s - singly linked list
 * @str: string - malloced string
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/**
 * print_list - Prints all the elements of a list_t list
 * @h: The list_t list to be printed
 * Return: The number or nodes
 */
size_t print_list(const list_t *h);

/**
 * list_len - Returns the number of elements in a linked list_t list
 * @h: The list to be counted
 * Return: Number of elements
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: The list to be modified
 * @str: char to be added to the list
 * Return: The modified list
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a node to the end of a list_t list
 * @head: The list to be modified
 * @str: char to be added to the list
 * Return: The modified list
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees a list_t list
 * @head: List to be freed
 */
void free_list(list_t *head);

#endif
