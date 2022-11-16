#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a variable of type struct dog.
 * @d: struct dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: no return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		s->age = age;
		d->owner = owner;
	}
}
