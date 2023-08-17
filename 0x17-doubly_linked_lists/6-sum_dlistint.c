#include "lists.h"

/**
 * sum_dlistint - sum all the data (n) of a  linked list
 * @head: pointer to head of the list
 *
 * Return: sum of the list or 0 if empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (temp)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
