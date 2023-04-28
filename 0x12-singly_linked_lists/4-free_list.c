#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to first node of the list
 * Return: Nothing 
 */
void free_list(list_t *head)
{
	list_t *temp = head;
	while(temp)
	{
		temp = head->next;
		free(head->next);
	}
}
