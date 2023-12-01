#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    // Allocate memory for the hash table
    hash_table_t *ht;
    unsigned long int i;

    ht = malloc(sizeof(hash_table_t));
    if (ht == NULL)
        return (NULL);

    // Allocate memory for the array in the hash table
    ht->size = size;
    ht->array = malloc(sizeof(hash_node_t *) * size);
    if (ht->array == NULL) {
        free(ht); // Free the allocated hash table memory if array allocation fails
        return (NULL);
    }

    // Initialize each element in the array to NULL
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    return (ht); // Return a pointer to the created hash table
}
