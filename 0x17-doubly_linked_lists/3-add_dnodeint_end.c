#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a list
 * @head: pointer to the head of the list
 * @n: node to be added to the end of the list
 *
 * Return: the address of the new element or NULL if failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (!(*head))
	{
		temp->prev = NULL;
		*head = temp;
	}
	else
	{
		dlistint_t *current = *head;
		while (current->next)
			current = current->next;

		current->next = temp;
		temp->prev = current;
	}

	return (temp);
}
