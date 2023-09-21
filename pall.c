#include "monty.h"
/**
 * f_pall - PRINTS the Stack..
 * @head: STACK head..
 * @counter: no USED..
 * RETRUN: no RETURN..
*/

void f_pall(stack_t **head, unsigned int counter)

{
	stack_t *A;
	(void)counter;

	A = *head;
	if (A == NULL)
		return;
	while (A)
	{
		printf("%d\n", A->n);
		A = A->next;
	}
}

