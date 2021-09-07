#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

int _strLen(char *str);
void fillMem(char *str, int strLen, char *dest);

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to the newly created dog (SUCCESS) or
 * NULL if insufficient memory was available (FAILURE)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *n_dog, doggo;
	int nameLen, ownerLen;

	dog_t *n_dogg = &doggo;

	n_dog = malloc(sizeof(dog_t));

	if (n_dog == NULL)
		return (NULL);

	nameLen = _strLen(name);
	n_dog->name = malloc(sizeof(char) * nameLen + 1);
	doggo.name = malloc(sizeof(char) * nameLen + 1);

	if (n_dog->name == NULL)
	{
		free(n_dog);
		return (NULL);
	}

	fillMem(name, nameLen, n_dog->name);
	fillMem(name, nameLen, doggo.name);

	ownerLen = _strLen(owner);
	n_dog->owner = malloc(sizeof(char) * ownerLen + 1);
	doggo.owner = malloc(sizeof(char) * ownerLen + 1);

	if (n_dog->owner == NULL)
	{
		free(n_dog);
		free(n_dog->name);
		return (NULL);
	}

	fillMem(owner, ownerLen, n_dog->owner);
	fillMem(owner, ownerLen, doggo.owner);

	n_dog->age = age;
	doggo.age = age;

	printf("name: %s\n", doggo.name);
	printf("owner: %s\n", doggo.owner);

	return (n_dogg);
}


/**
 * _strLen - get length of a string
 * @str: a string
 * Return: length of string
 */

int _strLen(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	return (i);
}

/**
 * fillMem - copy string literal to allocated memory
 * @str: string literal
 * @strLen: @str length
 * @dest: the allocated memomry
 */

void fillMem(char *str, int strLen, char *dest)
{
	int i;

	for (i = 0; i < strLen; i++)
		dest[i] = str[i];

	dest[i] = '\0';
}
