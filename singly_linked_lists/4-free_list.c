#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the first node of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
    list_t *current;
    list_t *next_node;

    current = head;
    
    while (current != NULL)
    {
       
        next_node = current->next;
        
        
        if (current->str != NULL)
            free(current->str);
        
        
        free(current);
        
        
	current = next_node;
	}
}
