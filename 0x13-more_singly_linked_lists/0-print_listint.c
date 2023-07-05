#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: pointer to list
 *
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
