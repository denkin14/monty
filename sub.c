#include "monty.h"

/**
 * f_sub - subtraction
 * @head: the stack head
 * @counter: line number
 * Return: no return
 */
void f_sub(stack_t **head, unsigned int counter)
{
	stack_t *swp;
	int sub, nodes;

	swp = *head;
	for (nodes = 0; swp != NULL; nodes++)
		swp = swp->next;
	if (nodes < 2)
	{
		frprintf(stderr, "L%d: can't sub, stack too shorrt\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	swp = *head;
	sub = swp->next->n - swp->n;
	swp->next->n = sub;
	*head = swp->next;
	free(swp);
}
