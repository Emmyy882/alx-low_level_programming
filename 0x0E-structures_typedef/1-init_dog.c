#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: dog struct
 * @name: dog name
 * @age: age of dog
 * @owner: name of dog owner
 *
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
