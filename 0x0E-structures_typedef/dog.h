#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: struct takes description of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * struct dog_t - new struct for type dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: a structure that contains dog info
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
