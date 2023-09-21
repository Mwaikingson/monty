#include "monty.h"
/**
 * f_pstr -PRINTS THE STRING starting at THE TOP of the stack..
 * followed by a new
 * @head: STACK HEAD..
 * @counter: line_number
 * Return: no RETURN
*/

void f_pstr(stack_t **head, unsigned int counter)

{
	stack_t *A;
	(void)counter;

	A = *head;
	while (A)
	{
		if (A->u > 127 || A->u <= 0)
		{
			break;
		}
		printf("%c", A->u);
		A = A->next;
	}
	printf("\u");
}
