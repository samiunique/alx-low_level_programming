#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * Adds or updates an element in a hash table.
 * @param ht: A pointer to the hash table.
 * @param key: The key to add - cannot be an empty string.
 * @param value: The value associated with the key.
 * @return: Upon failure - 0. Otherwise - 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value) {
    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return 0;

    unsigned long int index = key_index((const unsigned char *)key, ht->size);

    // Check if the key already exists, update the value if it does
    hash_node_t *current = ht->array[index];
    while (current != NULL) {
        if (strcmp(current->key, key) == 0) {
            char *new_value = strdup(value);
            if (new_value == NULL)
                return 0;
            
            free(current->value);
            current->value = new_value;
            return 1;
        }
        current = current->next;
    }

    // If the key doesn't exist, create a new node and add it to the hash table
    hash_node_t *new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return 0;

    new_node->key = strdup(key);
    if (new_node->key == NULL) {
        free(new_node);
        return 0;
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL) {
        free(new_node->key);
        free(new_node);
        return 0;
    }

    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return 1;
}
