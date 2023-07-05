#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a list
 * @head: pointer to list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
