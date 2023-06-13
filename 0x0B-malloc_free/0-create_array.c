#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: stores the size of array
 * @c: a string of characters
 * Return: 0 if size = NULL
 */
char *create_array(unsigned int size, char c)
{
	c = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
}
