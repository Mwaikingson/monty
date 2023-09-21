#include "monty.h"
/**
  *f_sub- Substraction
  *@head: Stack head
  *@counter: line_number
  *RETURN: no RETURN
 */

void f_sub(stack_t **head, unsigned int counter)
{
    stack_t *bot;
    int sus, nodes;

    bot = *head;
    nodes = 0;

    /* Count the number of nodes */
    while (bot != NULL)
    {
        nodes++;
        bot = bot->next;
    }

    if (nodes < 2)
    {
        fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }

    bot = *head;
    sus = bot->next->n - bot->n;
    bot->next->n = sus;
    *head = bot->next;
    free(bot);
}
