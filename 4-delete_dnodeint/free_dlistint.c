#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - Free list
 *
 * @head: pointer to first element of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node1;

	while (head)
	{
		node1 = head;
		head = head->next;
		free(node1);
	}
}
