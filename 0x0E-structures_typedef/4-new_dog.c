#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create new dog.
 *@name: name
 *@age: age
 *@owner: owner
 * Return: Always 0.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_do;

	new_do = malloc(sizeof(dog_t)); 
	if (!new_do)
		return (NULL);
	name = malloc(sizeof(char));
	if (!name)
		return (NULL);
	owner = malloc(sizeof(char));
		if (!owner)
			return (NULL);

	(*new_do).name = name;
	(*new_do).age = age;
	(*new_do).owner = owner;

	return (new_do);

}
