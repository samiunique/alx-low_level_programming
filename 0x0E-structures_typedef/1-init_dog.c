#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - dog re arenge profle
 *
 * @name: first m
 * @owner: second m
 * @age: third m
 * @d: 4th
 * Description: dog profile
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->owner = owner;
	d->age = age;
}
