#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	
	d = malloc(sizeof(struct dog));
	
		

		d->name = name;
		d->owner = owner;
		d->age = age;
}
