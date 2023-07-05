#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at
 * index of a listint_t list
 * @head: reference to listint_t list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeds, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
