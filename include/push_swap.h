#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "libft.h"


typedef struct s_a
{
    int data;

    struct s_a *next;
} node_t;

// ***** Main - push_swap *****
void    print_list(node_t *stack);

//error_handle
void    error_handle(int index);

//stack_maker
node_t  *create_new_node(int value);
void    stack_maker(node_t **head, int size, char **string);

//swap
void    swap(node_t **head);
void    doble_stack_swap(node_t **stack_a, node_t **stack_b);

void    push(node_t **stack_dst, node_t **stack_src);

//rotate
void    rotate(node_t **stack);
void    doble_stack_rotate(node_t **stack_a, node_t **stack_b);

//reverse_rotate
void    reverse_rotate(node_t **stack);
void    doble_stack_reverse_rotate(node_t **stack_a, node_t **stack_b);

// output_swap
void    sa(node_t  **head);
void    sb(node_t  **head);
void    ss(node_t **stack_a, node_t **stack_b);

//output_push
void    pa(node_t **stack_dst, node_t **stack_src);
void    pb(node_t **stack_dst, node_t **stack_src);

//output_rotate
void    ra(node_t **stack);
void    rb(node_t **stack);
void    rr(node_t **stack_a, node_t **stack_b);

//output_reverse_rotate
void    rra(node_t **stack);
void    rrb(node_t **stack);
void    rrr(node_t **stack_a, node_t **stack_b);

#endif