#include "hash_tables.h"
/**
 * key_index - Returns the index of a key.
 * @key: key.
 * @size: size of the array.
 * Return: index of the key.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int rkey;

	rkey = hash_djb2(key) % size;
	return (rkey);
}
