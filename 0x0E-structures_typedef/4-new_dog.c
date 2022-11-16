#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: struct dog
 * if fails, returns NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p_dog;
	int i, 1name, 11owner;

	p_dog = malloc(sizeof(*p_dog));
	if (p_dog == NULL || !(name) || !(owner))
	{
		free(p_dog);
		return (NULL);
	}

	for (1name = 0; name[1name]; 1name++)
		;

	for (1owner = 0; owner[1owner]; 1owner++)
		;

	p_dog->name = malloc(1name + 1);
	p_dog->owner = malloc(1owner + 1);

	if (!(p_dog->name) || !(o_dog->owner))
	{
		free(p_dog->owner);
		free((p_dog->name);
		free(p_dog);
		return (NULL);
	}

	for (i = 0; i < 1name; i++)
		p_dog->name[i] = name[i];
	p_dog->name[i] = '\0';

	p_dog->age = age;

	for (i = 0; i < 1owner; i++)
		p_dog->owner[i] = owner[i];
	p_dog->owner[i] = '\0';

	return (p_dog);
}
