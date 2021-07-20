#include <stdio.h>
#include "dog.h"

/**
 *main - init dog stuct.
 *@void:void
 *
 *Return: int
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "poppy", 3.5, "bob");
	printf("my name is %s and am %.1f\n :) -woof", my_dog.name, my_dog.age);
	return (0);
}

