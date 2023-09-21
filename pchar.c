#include "monty.h"
/**
 * f_pchar - PRINTS THE CHAR at the top of the STACK,
 * followed by a new line
 * @head: STACK head
 * @counter: line_number
 * RETRUN: no RETURN
*/

void f_pchar(stack_t **head, unsigned int counter)

{
	stack_t *A;

	A = *head;
	if (!A)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (A->n > 127 || A->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", A->n);
}
