#ifndef DOG_H
#define DOG_H

#include <stdlib.h>
/**
 * struct dog - typedef for dog profile
 *
 * @name: first member name of dog
 * @owner: second member dog owner
 * @age: therd member dog age
 *
 * Description: typedef for dog profile
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};
/**
 * my_dog - tpedef my dog
 *
 * @name: first member name of dog
 * @owner: second member dog owner
 * @age: therd member dog age
 *
 * Return: dog
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
