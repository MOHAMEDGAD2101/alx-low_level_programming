/**
 * print_listint - prints a linked list
 * @h: head of the list
 *
 * Return:size of list
 */
#include "lists.h"
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
