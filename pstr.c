#include "monty.h"

/**
 * f_pstr -this prints the string from the beginning of the top of the stack,
 * followed by a new
 * @head: head stack
 * @counter: number line
 *
 * Return: no return
*/
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
