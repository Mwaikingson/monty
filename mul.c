#include "monty.h"
/**
 * f_mul - MULTIPLIES THE TOP TWO elements of the stack..
 * @head: STACK HEAD
 * @counter: line_number
 * RETURN: no RETURN
*/

void f_mul(stack_t **head, unsigned int counter)

{
	stack_t *A;
	int len = 0, aux;

	A = *head;
	while (A)
	{
		A = A->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	A = *head;
	aux = A->next->n * A->n;
	A->next->n = aux;
	*head = A->next;
	free(A);
}

