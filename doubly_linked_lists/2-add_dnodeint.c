#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: Double pointer to the head of the list
 * @n: Value to store in the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/* Allocate memory for new node */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Set data for new node */
	new_node->n = n;
	new_node->prev = NULL;

	/* If list is empty */
	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (new_node);
	}

	/* If list is not empty */
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;

	return (new_node);
}
