#include "dog.h"

/**
 * free_dog - this function frees memory allocated for dog structure
 * @d: pointer to dog structure
 *
 * Description: this is a  function that takes a pointer to a dog structure
 * and free the memory allocated for its name, owner and the structure itself
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
