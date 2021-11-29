#include "push_swap.h"

int main(int argc, char **argv)
{
    node_t *head_a;
    node_t *head_b;
    
    head_b = NULL;
    print_list(head_b);
    if (argc < 2)
        error_handle(1);
    stack_maker(&head_a, argc, argv);
    stack_maker(&head_b, argc, argv);

    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");
    
    printf("swap a\n");
    swap(&head_a);
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");

    printf("swap a\n");
    doble_stack_swap(&head_a, &head_b);
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");
    
    printf("push\n");
    push(&head_b, &head_a);
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");
    
    printf("push reverse\n");
    push(&head_a, &head_b);
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");
    
    printf("rotate a\n");
    rotate(&head_a);
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");

    printf("doble rotate\n");
    doble_stack_rotate(&head_a, &head_b);
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");
    
    printf("reverse rotate a\n");
    reverse_rotate(&head_a);
    printf("head_a: ");
    print_list(head_a);
    printf("head_b: ");
    print_list(head_b);
    printf("\n");
    
    printf("doble reverse rotate\n");
    doble_stack_reverse_rotate(&head_a, &head_b);
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