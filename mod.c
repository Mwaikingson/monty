#include "monty.h"
/**
 * f_mod - COMPUTES THE REST of the division of the second..
 * TOP ELEMENT of the stack by the TOP ELEMENT of the stack..
 * @head: STACK HEAD
 * @counter: line_number
 * RETURN: no RETURN
*/

void f_mod(stack_t **head, unsigned int counter)

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
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	A = *head;
	if (A->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	aux = A->next->n % A->n;
	A->next->n = aux;
	*head = A->next;
	free(A);
}
