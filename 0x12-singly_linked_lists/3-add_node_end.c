#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of list
 * @head: pointer to pointer head
 * @str: stores string to be added to list_t
 * Return: address of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *newstr;
	list_t *new_node;
	list_t *current = malloc(sizeof(list_t));

	/* duplicating str and storing the dupli
	 * cate in newstr */
	newstr = strdup(str);
	if (newstr == NULL)
		return (NULL);

	/* allocating memory space of list_t to
	 * new_node */
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->len = strlen(newstr);
	new_node->str = newstr;
	new_node->next = NULL;
	
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		current = *head;
		while (current->next != NULL)
			current = current->next;
	}
	current->next = new_node;

	return (*head);
}