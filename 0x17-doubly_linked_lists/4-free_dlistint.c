#include "lists.h"

/**
 * free_dlistint - frees a list
 * @head: pointer to head of the list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	while (head)
	{
		dlistint_t *temp = head;
		head = head->next;
		free(temp);
	}
}
