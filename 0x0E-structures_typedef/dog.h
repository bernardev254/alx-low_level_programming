#ifndef DOG_H
#define DOG_H
/**
 * struct dog - defines dogs props
 * @name:name of the dog.
 * @age:dogs age.
 * @owner:dogs owner.
 *
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

