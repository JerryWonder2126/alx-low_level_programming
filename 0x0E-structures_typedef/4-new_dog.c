#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Finds the length of a string.
 * @str: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
 * new_dog - creates a new dog object
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: a dog object
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	char *nameCopy, *ownerCopy;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	nameCopy = malloc(sizeof(char) * (_strlen(name) + 1));
	if (nameCopy == NULL)
	{
		free(dog);
		return (NULL);
	}

	ownerCopy = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (ownerCopy == NULL)
	{
		free(nameCopy);
		free(dog);
		return (NULL);
	}

	_strcopy(nameCopy, name);
	_strcopy(ownerCopy, owner);

	dog->age = age;
	dog->name = nameCopy;
	dog->owner = ownerCopy;

	return dog;
}
