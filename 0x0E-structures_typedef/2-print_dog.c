#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - prints the members of a dog datatype
 *
 * @d: dog to be printed
 */
void print_dog(struct dog *d)
{
	if (dog != NULL)
	{
		if (dog->name != NULL)
			printf("Name: %s\n", dog->name);
		else
			printf("Name: (nil)\n");

		if (dog->age != NULL)
			printf("Age: %f\n", dog->age);
		else
			printf("Age: (nil)\n");

		if (dog->owner != NULL)
			printf("Owner: %s\n", dog->owner);
		else
			printf("Owner: (nil)");
	}
}
