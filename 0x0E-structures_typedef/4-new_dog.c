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
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);
(*new_dog).name = name;
(*new_dog).age = age;
(*new_dog).owner = owner;
return (new_dog);

}
