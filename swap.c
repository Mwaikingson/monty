#include "monty.h"
/**
 * f_swap - ADDS THE TOP TWO elements of the stack..
 * @head: STACK HEAD..
 * @counter: line_number
 * Return: no RETURN
*/

void f_swap(stack_t **head, unsigned int counter)

{
	stack_t *A;
	int len = 0, bot;

	A = *head;
	while (A)
	{
		A = A->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	A = *head;
	bot = A->u;
	A->u = A->next->u;
	A->next->u = bot;
}
