#include "monty.h"
/**
  *f_rotl- ROTATES the STACK to the top
  *@head: STACK HEAD..
  *@counter: line_number
  *RETURN: no RETURN..
 */

void f_rotl(stack_t **head,  __attribute__((unused)) unsigned int counter)

{
	stack_t *tmp = *head, *bot;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	bot = (*head)->next;
	bot->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *head;
	(*head)->next = NULL;
	(*head)->prev = tmp;
	(*head) = bot;
}
