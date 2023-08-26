#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>

/**
 * struct - stru
 * @list: list 
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str);
size_t list_len(const list_t *h);
size_t print_list(const list_t *h);

#endif 
