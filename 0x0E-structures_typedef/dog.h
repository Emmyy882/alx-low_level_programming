#ifndef DOG_H
#define DOG_H
/**
 * dog - dog structure
 * @name: dog name
 * @age: dog age
 * @owner: name of dog owner
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
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: a structure that contains dog info
 */
typedef struct
{
	char *name;
	float age;
	char *owner;
}dog_t;

/**
 * init_dog - initialize struct variables
 * @dog *d: pointer reference to struct dog
 * @name: holds name of dog
 * @age: holds age of dog
 * @owner: holds the name of dog owner
 * Return: 0
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
