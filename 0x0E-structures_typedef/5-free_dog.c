#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * free_dog - frees dogs
 * @*d: pointer to dog struct
 * Return: 0
 */
void free_dog(dog_t *d)
{
	free(d);
}
