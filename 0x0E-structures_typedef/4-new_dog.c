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
	int p;
	int i;

	new_do = malloc(sizeof(dog_t));
	if (!new_do)
		return (NULL);
	while (name[n])
		n++;
	(*new_do).name = malloc((n + 1) * sizeof(char));
	if (!((*new_do).name))
	{
		free(new_do);
		return (NULL);
	}
	for (p = 0; p <= n; p++)
	{
	(*new_do).name[p] = name[p];
	}
	(*new_do).age = age;
	while (owner[o])
		o++;
	(*new_do).owner = malloc((o + 1) * sizeof(char));
	if (!((*new_do).owner))
	{
		free((*new_do).name);
		free(new_do);
		return (NULL);
	}
	for (i = 0; i <= o ; i++)
	{
	(*new_do).owner[i] = owner[i];
	}
	return (new_do);

}
