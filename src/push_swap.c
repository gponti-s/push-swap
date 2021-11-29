#include "push_swap.h"

int main(int argc, char **argv)
{
    node_t *head_a;
    node_t *head_b;
    error_t error;
    
    head_b = NULL;
    struct_inicialazer(&error);
    print_list(head_b);
    error_handle(argc, argv, &error);
    stack_maker(&head_a, argc, argv);
    stack_maker(&head_b, argc, argv);

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
    printf("\n");

    return 0;
}

void print_list(node_t *stack)
{
    while(stack)
    {
        printf("%d - ", stack->data);
        stack = stack->next;
    }
    printf("\n");
}