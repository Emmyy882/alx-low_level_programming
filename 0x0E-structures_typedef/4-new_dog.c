#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * dog_t new_dog - creates a new dog structure
 * @name: element 1, dog name
 * @age: element 2, dog age
 * @owner: element 3, name of dog owner
 * Return: new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}
	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
