#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates mempry for an array
 *
 * @nmemb: elements
 * @size: array size
 * Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * sizeof(size));

	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
