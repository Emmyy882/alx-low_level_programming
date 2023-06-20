#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - checks if an element of d is NULL
 * @d: dog struct
 * Return: 0;
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf(NULL);
	}
	if (d->name == NULL || d->age == 0 || d->owner == NULL)
	{
		printf("(nil)");
	}
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner); 
}
