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
void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
