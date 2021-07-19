#include "dog.h"

/**
 * print_dog - prints the data items of struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s", d->name ? d->name : "(nil)");

		if (d->age)
			printf("Age: %f", d->age);
		else
			printf("Age: %s", "(nil)");

		printf("Owner: %s", d->owner ? d->owner : "(nil)");
	}
}
