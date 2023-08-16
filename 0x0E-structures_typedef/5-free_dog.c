#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free memores ocupied by dog profile
 * 
 * @dog: member that ocupies a mem space.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
