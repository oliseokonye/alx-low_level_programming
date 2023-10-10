#include "dog.h"

int _strlen(char *s);
char *_strcpy(char *dest, char *src);

/**
 * new_dog - this function creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Return: pointer to new dog
 *	or NULL when there is a failure
 *
 * Description: this is a function that creates a new dog
 *	with a given name, age and owner
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *B;

	B = malloc(sizeof(dog_t));
	if (B == NULL)
		return (NULL);

	B->name = malloc(_strlen(name) + 1);
	B->owner = malloc(_strlen(owner) + 1);

	if (B->name == NULL || B->owner == NULL)
	{
		free(B->name);
		free(B->owner);
		free(B);
		return (NULL);
	}

	_strcpy(B->name, name);
	B->age = age;
	_strcpy(B->owner, owner);

	return (B);
}

/**
 * _strlen - this function compute the lenght of a string
 * @s: pointer to the string
 * Return: return the lenght of the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * _strcpy - this function will copy a string from 'src' to 'dest'
 * @dest: the destination
 * @src: The source
 * Return: return the string
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
