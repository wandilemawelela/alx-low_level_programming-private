#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Basic dog struct with few members
 * @name: Name of dog
 * @age: Age of dog
 * @owner: Dog's owner
 *
 * Description:  a new type struct dog with the three members
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif /* DOG_H */
