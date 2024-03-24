#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - Print doubly linked list of int
 *
 * @h: A pointer to first element of list
 *
 * Return: Number of element printed
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
