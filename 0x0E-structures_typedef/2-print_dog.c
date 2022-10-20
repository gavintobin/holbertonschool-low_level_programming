#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct
 * @d: pointer to struct
 *Return: element, nil
 */

void print_dog(struct dog *d)
{
	struct dog;

	if (d == NULL)
		return;
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
		 printf("Name: %s\n", d->name);
	if (d->owner == NULL)
	{
		printf("(nil)\n");
	}
	else
		  printf("Owner: %s\n", d->owner);
	if (d->age != d->age)
	{
		printf("(nil)\n");
	}
	else
		 printf("Age: %f\n", d->age);
}
