#include "hash_tables.h"

/**
 * hash_table_set - Add or update an element in the hash table
 * @ht: pointer to the hash table
 * @key: The key to add, cannot be empty
 * @value: value associated with key
 *
 * Return: 0 on failure, else 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	char *val;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	val = strdup(value);
	if (val == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		free(val);
		return (0);
	}
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(val);
		free(new_node);
		return (0);
	}
	new_node->value = val;
	if (ht->array[index] == NULL)
	{
		new_node->next = NULL;
		ht->array[index] = new_node;
	}
	else
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			new_node->next = ht->array[index];
			ht->array[index] = new_node;
		}
	}
	return (1);
}
