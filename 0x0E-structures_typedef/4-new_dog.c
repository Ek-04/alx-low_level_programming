#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
dog_t *new_dog(char *name, float age, char *owner);

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
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: new dog's owner
 * Return: NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *bluey;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	bluey = malloc(sizeof(dog_t));
	if (bluey == NULL)
		return (NULL);

	bluey->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (bluey->name == NULL)
	{
		free(bluey);
		return (NULL);
	}

	bluey->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (bluey->owner == NULL)
	{
		free(bluey->name);
		free(bluey);
		return (NULL);
	}

	bluey->name = _strcopy(bluey->name, name);
	bluey->age = age;
	bluey->owner = _strcopy(bluey->owner, owner);

	return (bluey);
}
