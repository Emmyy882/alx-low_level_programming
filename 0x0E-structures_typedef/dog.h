#ifndef DOG_H
#define DOG_H
/**
 * strucct dog - dog structure
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
 *
 * Description: struct takes description os a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
