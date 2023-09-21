#include "monty.h"
/**
 * f_pop - PRINTS THE TOP..
 * @head: STACK head
 * @counter: line_number
 * RETURN: no RETURN
*/

void f_pop(stack_t **head, unsigned int counter)

{
	stack_t *A;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	A = *head;
	*head = A->next;
	free(A);
}

