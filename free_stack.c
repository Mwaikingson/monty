#include "monty.h"
/**
* free_stack - FREES a DOUBLY LINKED LIST..
* @head: HEAD OF THE STACK..
*/

void free_stack(stack_t *head)

{
	stack_t *dot;

	dot = head;
	while (head)
	{
		dot = head->next;
		free(head);
		head = dot;
	}
}
