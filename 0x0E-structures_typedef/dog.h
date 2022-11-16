#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/**
 * struct dog - struct that stores some information of a dog
 * @name: name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Description: struct called "dog" that stores its name, its age
 * and the name of its owner
 */
struc dog
{
	char *name;
	float age;
	char *owner;
}

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owmer);
void free_dog(dog_t *d);

#endif
