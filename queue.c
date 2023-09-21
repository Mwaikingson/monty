 * f_queue - PRINTS the TOP..
 * @head: STACK head..
 * @counter: line_number
 * RETURN: no RETURN..
*/

void f_queue(stack_t **head, unsigned int counter)

{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - ADD NODE TO THE TAIL stack
 * @n: new_value
 * @head: HEAD of the STACK..
 * RETURN: no RETURN..
*/

void addqueue(stack_t **head, int u)

{
	stack_t *new_node, *bot;

	bot = *head;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->u = u;
	new_node->next = NULL;
	if (bot)
	{
		while (bot->next)
			bot = bot->next;
	}
	if (!bot)
	{
		*head = new_node;
		new_node->prev = NULL;
	}
	else
	{
		bot->next = new_node;
		new_node->prev = bot;
	}
}
