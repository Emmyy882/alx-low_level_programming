#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - sum all the data (n) of a 
 * listint_t list
 * @head: reference to the listint_t list
 * Return: sum of all the data (n) in the list
 */
int sum_listint(listint_t *head)
{
	size_t sum = 0;
	listint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
