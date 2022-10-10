#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - this functions frees a dog_t datatype from memory
 *
 * @d: the dog to be freed
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
