#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer to previously allocated memory
 * @old_size: size in bytes of ptr
 * @new_size: size in bytes of new memory block
 *
 * Return: pointer to reallocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	void newptr = malloc(new_size);
	if (new_size > old_size)
	{
		new_size = old_size;
		newptr = _memset(newptr, ptr, new_size);
	}
	
	return (newptr);
}
