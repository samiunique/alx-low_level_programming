#include <stdio.h>
#include "hash_tables.h"

/**
 * Prints a hash table with key-value pairs.
 * @param ht: A pointer to the hash table to print.
 * Description: Key/value pairs are printed in the order
 * they appear in the array of the hash table.
 */
void hash_table_print(const hash_table_t *ht) {
    if (ht == NULL)
        return;

    printf("{");

    unsigned char comma_flag = 0;

    for (unsigned long int i = 0; i < ht->size; i++) {
        hash_node_t *node = ht->array[i];

        while (node != NULL) {
            if (comma_flag == 1)
                printf(", ");

            printf("'%s': '%s'", node->key, node->value);
            node = node->next;

            comma_flag = 1;
        }
    }

    printf("}\n");
}
