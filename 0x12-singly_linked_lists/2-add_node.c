#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * list_t add_node - adds a new node at the begining of a list
 * @head: pointer to the head of the list
 * @str: takes the node to be added
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *newstr;
	list_t *new_node;

	newstr = strdup(str);
	if (newstr == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = strlen(newstr);
	new_node->str = newstr;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
