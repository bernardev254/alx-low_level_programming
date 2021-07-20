#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints contents of dog structure
 * @d:pointer to structure variable.
 * @NULL:null
 *
 * Return:void
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
exit(EXIT_SUCCESS);
}
else
{
if (d->name == NULL)
{
d->name = "(nil)";
}
if (d->owner == NULL)
{
d->owner = "(nil)";
}
}
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}

