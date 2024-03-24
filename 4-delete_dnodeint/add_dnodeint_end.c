#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - Add a node at end of a list
 *
 * @head: The address of pointer to first element of list
 * @n: The number to store in new element
 *
 * Return: A pointer to new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newList;
	dlistint_t *l;

	newList = malloc(sizeof(dlistint_t));
	if (newList == NULL)
	{
		return (NULL);
	}
	newList->n = n;
	newList->next = NULL;
	
	if (*head == NULL)
	{
		*head = newList;
		newList->prev = NULL;
		return (newList);
	}
	
	l = *head;
	while (l->next != NULL)
	{
		l = l->next;
	}
	l->next = newList;
	newList->prev = l;
	return (newList);
}
