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
	int n = 0;
	int o = 0;
	new_do = malloc(sizeof(dog_t)); 
	if (!new_do)
		return (NULL);
	
	while (name[n])
	{
		n++;
	}
	(*new_do).name = malloc((n + 1) * sizeof(char));
	if(!name)
	{
		return (NULL);
	}
	(*new_do).name = name;
	(*new_do).age = age;
	while (owner[o])
	{
		o++;
	}
	(*new_do).owner = malloc((o + 1) * sizeof(char));
	if(!owner)
	{
		return (NULL);
	}
	(*new_do).owner = owner;
	return (new_do);

}
