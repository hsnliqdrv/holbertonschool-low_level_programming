#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - string length
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int l = 0;

	while (s[l++]);
	return (l);
}
/**
 * _strdup - duplicate string
 * @s: string
 *
 * Return: new string
 */
char *_strdup(char *s)
{
	int l = _strlen(s) + 1, i;
	char *str = malloc(l);

	if (str == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		str[i] = s[i];
	return (str);
}

/**
 * new_dog - create a dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);
	ptr->name = _strdup(name);
	ptr->age = age;
	ptr->owner = _strdup(owner);
	return (ptr);
}
