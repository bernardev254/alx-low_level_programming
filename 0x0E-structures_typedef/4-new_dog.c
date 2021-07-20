#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates new dog
 *@name:pointer to struct var
 *@age:var
 *@owner:pointer to struct var
 *
 * Return:pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *d;
d = malloc(sizeof(dog_t));
if (d == NULL)
free(d);
d->name = name;
d->age = age;
d->owner = owner;
d->name = name;
d->owner = owner;
return (d);
}
