#include "lists.h"

/**
 * dlistint_len - returns the number of elememts on a linked dlistint_t list
 * @h: pointer to dlistint_t list
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}
