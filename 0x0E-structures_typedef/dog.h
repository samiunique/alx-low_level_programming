#ifndef DOG
#define DOG

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
struct dog *my_dog(char *name, char *owner, float age)
{
	struct dog *ddog;

	ddog = malloc(sizeof(struct dog));
	if (ddog == NULL)
		return (NULL);
	ddog->name = name;
	ddog->owner = owner;
	ddog->age = age;
	return (ddog);
}

#endif
