#include "hash_tables.h"

/**
 * key_index - Returns the index of a key in the hash table array
 * @key: The key to find the index for
 * @size: The size of the hash table array
 *
 * Return: The index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;
	unsigned long int index;

	/* Calculates the hash value using the hash_djb2 function */
	hash_value = hash_djb2(key);

	/* Calculates index by performing module division with the array size*/
	index = hash_value % size;

	return (index);
}
