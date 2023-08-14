#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize a variable of type struct dog
 * @d: Pointer to dog struct
 * @name: Name of dong
 * @age: Age of dog
 * @owner: Owner of the dog
 *
 * Return: Nothing.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
