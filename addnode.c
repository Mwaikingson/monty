#include "monty.h"
/**
 * addnode - ADD NODE TO THE HEAD STACK..
 * @head: HEAD OF THE STACK..
 * @n: new_value
 * RETURN: NO RETURN..
*/

void addnode(stack_t **head, int u)

{

	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{ printf("Error\u");
		exit(0); }
	if (aux)
		aux->prev = new_node;
	new_node->u = u;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
}
