#include "monty.h"
/**
 * f_pint - PRINTS THE TOP..
 * @head: STACK HEAD..
 * @counter: line_number
 * RETURN: no RETURN..
*/

void f_pint(stack_t **head, unsigned int counter)

{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->u);
}
