#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints the data items of struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");

		if (d->age)
			printf("Age: %f\n", d->age);
		else
			printf("Age: %s\n", "(nil)");

		printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
