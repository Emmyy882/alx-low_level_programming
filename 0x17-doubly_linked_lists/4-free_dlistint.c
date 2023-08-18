#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of the dlistint_t list
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
