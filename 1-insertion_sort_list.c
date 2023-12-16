#include "sort.h"

/**
 * insertion_sort_list - Entry point
 * @list: A list that requires sorting
 * Return: Nothing since it's a void function
 */

void insertion_sort_list(listint_t **list)
{
listint_t *temp, *t, *p;

if (list == NULL || *list == NULL)
{ return; }

temp = *list;
while (temp != NULL)
{
t = temp;

	while (t->prev != NULL && t->n < (t->prev)->n)
	{
		p = t->prev;

		if (p->prev != NULL)
		{ (p->prev)->next = t; }
		t->prev = p->prev;

		p->next = t->next;
		if (t->next != NULL)
		{ (t->next)->prev = p; }

		t->next = p;
		p->prev = t;

		if (t->prev == NULL)
		{ *list = t; }

	print_list(*list);
	}
temp = temp->next;
}

}
