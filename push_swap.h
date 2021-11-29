#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


typedef struct s_a
{
    int data;

    struct s_a *next;
} node_t;

void    error_handle(int index);
node_t  *create_new_node(int value);
void    stack_maker(node_t **head, int size, char **string);
void    swap(node_t **head);
void    doble_stack_swap(node_t **stack_a, node_t **stack_b);
void    push(node_t **stack_dst, node_t **stack_src);
void    rotate(node_t **stack);
void    doble_stack_rotate(node_t **stack_a, node_t **stack_b);
void    reverse_rotate(node_t **stack);
void    doble_stack_reverse_rotate(node_t **stack_a, node_t **stack_b);

void print_list(node_t *stack);
#endif