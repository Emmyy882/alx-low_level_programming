#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all elements of a list_t list
 * @h: pointer to list_t list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;

	if (h== NULL)
		printf("[%d] (nil)\n", 0);

	count = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
