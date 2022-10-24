#include <list.h>

/**
 * print_listint - prints all the elements of a linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		printf("error");

	const listint_t *p = NULL;

	p = h;

	while (p != NULL)
	{
		printf("%d", p->next);
		p = p->next;
	}
}
