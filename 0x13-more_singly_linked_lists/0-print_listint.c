/**
 * print_listint - prints a linked list
 * @h: head of the list
 *
 * Return:size of list
 */
#include "lists.h"
size_t print_listint(const listint_t *h)
{
	size_t a = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		a++;
	}
	return (a);
}
