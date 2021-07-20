#include <stdlib.h>
#include "dog.h"

/**
 *free_dog - frees new dog
 *@d:pointer to dog struct
 *
 * Return:pointer
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
