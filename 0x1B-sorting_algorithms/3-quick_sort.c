#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

int lomuto(int *array,int menor, int mayor, size_t size);
void rqs(int *array, int menor, int mayor, size_t size);
void mover(int *a, int *b);

void quick_sort(int *array, size_t size)
{
	int menor;
	int mayor;

	if (array == NULL || size < 2)
		return;

	menor = 0;
	mayor = size - 1;
	rqs(array, menor, mayor, size);
}

void rqs(int *array, int menor, int mayor, size_t size)
{
	int piv;

	if (menor < mayor)
	{
		piv = lomuto(array, menor, mayor, size);
		rqs(array, menor, (piv - 1), size);
		rqs(array, (piv + 1), mayor, size);
	}
}

int lomuto(int *array,int menor, int mayor, size_t size)
{
	int pivote = array[mayor];
	int final = menor;
	int cont = menor;

	while (cont < mayor)
	{
		if (array[cont] < pivote)
		{
			if(array[final] != array[cont])
			{
				mover(&array[final], &array[cont]);
				print_array(array, size);
			}
			final++;
		}
		cont++;
	}
	if (array[final] > pivote)
		mover(&array[final], &array[mayor]);
	if (&array[final] != &array[cont])
	{
		print_array(array, size);

	}	
	return (final);
}
void mover(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
