#include"lists.h"
/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to the head of the list
 * @index: Index of the node to return, starting from 0
 *
 * Return: Pointer to the node at specified index, or NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int position = 0;

	while (head)
	{
		if (position == index)
			return (head);

		head = head->next;
		position++;
	}

	return (NULL);
}
