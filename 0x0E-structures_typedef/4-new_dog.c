#include <stdlib.h>
#include <string.h>
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
        return (NULL);
  
      d->name = malloc(sizeof(char) * (strlen(name) + 1));
  
      if (d->name == NULL)
      {
        free(d);
        return (NULL);
      }
      d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
  
      if (d->owner = NULL)
      {
        free(d);
        free(d->name);
        return (NULL);
      }
      free(d->owner);
      strcpy(d->name, name);
      strcpy(d->owner, owner);
      d->age = age;
  
      return (d);
}
