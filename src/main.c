#include "push_swap.h"

int main(int argc, char **argv)
{
    t_node *head_a;
    t_node *head_b;
    int size;
    
    head_b = NULL;
    head_a = NULL;
    parsing_check(argc, argv);
    stack_maker(&head_a, argc, argv);
    size = list_size(&head_a);
    if (size < 4)
        sorting_three(&head_a);
    else if  (size > 3 && size < 7)
        sorting_five(&head_a, &head_b);
    else
        sorting_big_numbers(&head_a, &head_b, size);
    //printf("\nhead_a sorted:\n");
    print_list(head_a);
    return 0;
}