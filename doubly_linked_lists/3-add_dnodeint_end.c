#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Value to store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *temp;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set data for new node */
	new_node->n = n;
	new_node->next = NULL;

	/* If list is empty */
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	/* If list is not empty, traverse to the end */
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;

	/* Link the new node at the end */
	temp->next = new_node;
	new_node->prev = temp;

	return (new_node);
}
