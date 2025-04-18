#include"lists.h"
/**
 * sum_dlistint - Calculates the sum of all data  in a dlistint_t linked list
 * @head: Pointer to the head of the list
 *
 * Return: Sum of all the data values, or 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{

	int sum = 0;
	dlistint_t *i;

	for (i = head; i != NULL; i = i->next)
	{
		sum += i->n;
	}

	return (sum);
}
