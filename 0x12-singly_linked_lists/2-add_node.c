#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds a new node at the begining of a list
 * @head: the head of the list
 * @str: takes the node to be added
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *)malloc(sizeof(list_t));
	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
