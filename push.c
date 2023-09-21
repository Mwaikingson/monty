#include "monty.h"
/**
 * f_push - ADD NODE to the stack..
 * @head: STACK HEAD..
 * @counter: line_number
 * Return: no RETURN..
*/

void f_push(stack_t **head, unsigned int counter)

{
	int u, k = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			k++;
		for (; bus.arg[k] != '\0'; k++)
		{
			if (bus.arg[k] > 57 || bus.arg[k] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	u = atoi(bus.arg);
	if (bus.lifi == 0)
		addnode(head, u);
	else
		addqueue(head, u);
}
