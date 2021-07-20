#include <stdlib.h>
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
	int nameLen, ownerLen;
	dog_t dog, *n_dog;

	/**
	* n_dog = malloc(sizeof(dog_t));
	* if (n_dog == NULL)
	*	return (NULL);
	*/
	nameLen = _strLen(name);
	dog.name = malloc(sizeof(char) * nameLen + 1);

	if (dog.name == NULL)
	{
		return (NULL);
	}

	fillMem(name, nameLen, dog.name);

	ownerLen = _strLen(owner);
	dog.owner = malloc(sizeof(char) * ownerLen + 1);

	if (dog.owner == NULL)
	{
		free(dog.name);
		return (NULL);
	}

	fillMem(owner, ownerLen, dog.owner);

	dog.age = age;

	n_dog = &dog;

	return (n_dog);
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
