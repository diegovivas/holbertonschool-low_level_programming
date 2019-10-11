#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table
 * @size: size of array.
 * Return: Pointer to hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ojo;
	unsigned long int contador = 0;

	if (size == 0)
		return (NULL);
	ojo = malloc(sizeof(hash_table_t));
	if (ojo == NULL)
		return (NULL);
	ojo->size = size;
	ojo->array = malloc(sizeof(ojo) * size);
	if (ojo->array == NULL)
	{
		free(ojo);
		return (NULL);
	}
	while (contador < size)
	{
		ojo->array[contador] = NULL;
		contador++;
	}
	return (ojo);
}
