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


typedef struct error_a
{
    int FEW_ARGUMENT;
    int IS_NOT_DIGIT;
    int SORTED;
    int REPEATED;

} error_t;

// ***** Main - push_swap *****
void    print_list(node_t *stack);

//error_handle
void error_handle(int argc, char **argv, error_t *error);
void struct_inicialazer(error_t *error);
void error_output(error_t *error);
void check_digit(char **argv, error_t *error);
void check_repeated(char **argv, error_t *error);

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

//sorting_three
void sorting_three(node_t **head_a);

//print_list
void print_list(node_t *stack);

//sorting_five
void sorting_five(node_t **head_a, node_t **head_b);
void push_stack_b(node_t **head_a, node_t **head_b);
void replace_second(node_t **head_a, node_t **head_b);
int replace_penultimate(node_t **head_a, node_t **head_b, int i);
int replace_last(node_t **head_a, node_t **head_b, int i);

//sorting_hundred
void sorting_hundred(node_t **head_a, node_t **head_b);
void looKingFor_mini_max(node_t **head_a, node_t **head_b);
void send_minimal(node_t **head_a, node_t **head_b, int position, int size, int minimal);
void send_maximal(node_t **head_a, node_t **head_b, int position, int size, int maximal);


#endif