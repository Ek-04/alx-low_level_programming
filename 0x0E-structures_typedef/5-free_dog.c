#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for dog_t structure
 * @d: Pointer to dog_t structure to be freed
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
