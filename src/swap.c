#include "push_swap.h"

void    swap(node_t **head)
{
    node_t *temp;
    node_t *temp2;

    if ((*head) != NULL && (*head)->next != NULL)
    {
        temp = (*head)->next;
        temp2 = (*head);
        temp2->next = temp->next;
        (*head) = temp;
        (*head)->next = temp2;
    }
    else
        error_handle(2);
}

void    doble_stack_swap(node_t **stack_a, node_t **stack_b)
{
    swap(stack_a);
    swap(stack_b);
}
