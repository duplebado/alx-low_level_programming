#ifndef DOG_
#define DOG_

void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * struct dog - dog class
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* ifndef DOG_ */
