#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - prints a grid of integers
 * @height: the address of the two dimensional grid
 * @width: width of the grid
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int cont, cont2;
	int **array;

	array = malloc(height * sizeof(char *));

	if (array == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	for (cont = 0; cont < height; cont++)
	{
		array[cont] = malloc(width * sizeof(int));
		if (array[cont] == NULL)
		{
			for (cont = 0; cont < height ; cont++)
			{
				free(array[cont]);
			}
			free(array);
			return (NULL);
		}
		for (cont2 = 0; cont2 < width ; cont2++)
		{
			array[cont][cont2] = 0;
		}
	}
	return (array);
}
