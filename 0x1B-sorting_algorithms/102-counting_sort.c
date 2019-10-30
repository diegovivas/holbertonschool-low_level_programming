#include <stdlib.h>
#include <stdio.h>
#include "sort.h"

int *ordenar(int *at, int temp, size_t size, int *array);

void counting_sort(int *array, size_t size)
{
	size_t cont = 0;
	int n1, n2, temp = 0;
	int *at, *ar2;

	for (;cont < size; cont++)
	{
		if (temp < array[cont])
			temp = array[cont];
	}
	at = malloc((temp + 1) * sizeof(int));
	if (at == NULL)
		return;
	at = ordenar(at, temp, size, array);
	ar2 = malloc((size + 1) * sizeof(int));
	if (ar2 == NULL)
		return;

	cont = 0;
	while (cont < size)
	{
		n1 = array[cont];
		n2 = at[n1];
		ar2[n2 - 1] = n1;
		at[n1]--;
		cont++;
	}
	cont = 0;
	while (cont < size)
	{
		array[cont] = ar2[cont];
		cont++;
	}
	free(ar2);
	free(at);
}
int *ordenar(int *at, int temp, size_t size, int *array)
{
	int temp2 = 0, cont2 = 0;
	size_t cont3;

	while (cont2 <= temp)
	{
                at[cont2] = 0;
                cont2++;
	}
	cont2 = 1;
	cont3 = 0;
	while (cont3 < size)
	{
		temp2 = array[cont3];
		at[temp2]++;
		cont3++;
	}
        while (cont2 <= temp)
	{
		at[cont2] = at[cont2] + at[cont2 - 1];
		if (cont2 < temp)
			printf("%d, ", at[cont2]);
		else
			printf("%d\n", at[cont2]);
                cont2++;
	}
	return at;
}