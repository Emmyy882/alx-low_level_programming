#include <stdio.h>
#include <stdlib.h>

/**
 * _memset - fill a block of memory with a particular value
 *
 * @ptr: starting address of memory to be filled
 * @x: value to be filled
 * 
 * @n: number of bytes to be filled
 * Return: pointer to memory
 */
char *_memset(char *ptr, int x, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		ptr[i] = x;
	}
	return (ptr);
}

/**
 * _calloc - allocates memory for an array
 *
 * @nmemb: number of elements
 *
 * @size: memory size
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}

	ptr = _memset(ptr, 0, (nmemb * size));
	return (ptr);
}
