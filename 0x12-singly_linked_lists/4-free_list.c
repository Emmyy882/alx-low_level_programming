#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: pointer to list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *current = head;

	while (current != NULL)
	{
		list_t *next = current->next;
		
		free(current->str);
		free(current);
		current = next;
	}
}
