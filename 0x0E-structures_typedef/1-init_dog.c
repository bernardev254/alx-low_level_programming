#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - init dog stuct.
 * @d: struct pointer variable.
 *@name: name pointer variable.
 *@age:age variable.
 *@owner:owner variable.
 *
 *Return : void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}

