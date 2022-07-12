#include "monty.h"

/**
 * f_swap - will add top two elements of stack
 * @head: the stack head
 * @counter: line number
 * Return: no return
 */
void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int my_len = 0, swp;

	h = *head;
	while (h)
	{
		h = h->next;
		my_len++;
	}
	if (my_len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	swp = h->n;
	h->n = h->next->n;
	h->next->n = swp;
}
