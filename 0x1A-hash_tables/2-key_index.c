#include "hash_tables.h"

/**
 * key_index - generates the index to store data on
 * 	the hash map
 * @key: The key to get the index of
 * @size: The size of the hash map
 *
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
