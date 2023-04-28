#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * *add_node_end - adds a new node at the end of a list_t list
 * @head: pointer to first node of the list
 * @str: pointer to the string
 * Return: address of the new element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	if (*head == NULL)
		*head = node;
	else
		(*head)->next = node;
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = NULL;
	return (node);
}
