#include "push_swap.h"

void    push(node_t **stack_dst, node_t **stack_src)
{
    node_t *temp;
    node_t *temp2;

    temp = *stack_src;
    temp2 = *stack_dst;
    (*stack_src)= temp->next;
    (*stack_dst)= temp;
    (*stack_dst)->next=temp2;

}