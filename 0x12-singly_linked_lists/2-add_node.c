#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to first node of the list
 * @str: pointer to the string
 * Return: address of the new element or NULL
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	node->len = strlen(str);
	node->next = *head;
	*head = node;
	return (node);
}
