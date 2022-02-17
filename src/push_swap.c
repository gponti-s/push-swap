#include "push_swap.h"

int main(int argc, char **argv)
{
    node_t *head_a;
    node_t *head_b;
    error_t error;
    int size;
    
    head_b = NULL;
    head_a = NULL;
    struct_inicialazer(&error);
    error_handle(argc, argv, &error);
    stack_maker(&head_a, argc, argv);
    size = list_size(&head_a);
    //printf("The list size is: %d\n", size);
    if (size < 4)
        sorting_three(&head_a);
    else if  (size > 3 && size < 7)
        sorting_five(&head_a, &head_b);
    else
        sorting_hundred(&head_a, &head_b, size);
    //printf("\nhead_a sorted:\n");
    //print_list(head_a);
    //printf("\nhead_b sorted:\n");
    //print_list(head_b);

    /*git
    printf("Linked List from input:\n");
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");
    
    printf("swap\n");
    sa(&head_a);
    printf("head_a: ");
    print_list(head_a);
    sb(&head_b);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");

    printf("doble swap\n");
    ss(&head_a, &head_b);
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");
    
    printf("push\n");
    pa(&head_b, &head_a);
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");
    
    printf("push reverse\n");
    pb(&head_a, &head_b);
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");
    
    printf("rotate\n");
    ra(&head_a);
    printf("head_a: ");
    print_list(head_a);
    rb(&head_b);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");

    printf("doble rotate\n");
    rr(&head_a, &head_b);
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");
    
    printf("reverse rotate\n");
    rra(&head_a);
    printf("head_a: ");
    print_list(head_a);
    rrb(&head_b);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");
    
    printf("doble reverse rotate\n");
    rrr(&head_a, &head_b);
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");*/

    return 0;
}