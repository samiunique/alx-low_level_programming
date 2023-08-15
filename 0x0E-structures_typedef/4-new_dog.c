#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - new pointer for copy of dog profile
 *
 * @name: name copy for dog name
 * @owner: copy of owner name
 * @age: copy of dog age
 *
 * Return: dog profile
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = (dog_t *)malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->owner = owner;
	dog->age = age;
	return (dog);
}
void free_dog(dog_t *dog)
{
	if (dog != NULL)
	{
		free(dog);
	}
}
