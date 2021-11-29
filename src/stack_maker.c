#include "push_swap.h"

node_t *create_new_node(int value)
{
    node_t *result;

    result = malloc(sizeof(node_t));
    result->data = value;
    result->next = NULL;
    return (result);
}

void    stack_maker(node_t **head, int size, char **string)
{
    int i;
    int value;
    node_t *temp;

    i = (size - 1);
    while (i > 0)
    {
        value = atoi(string[i--]);
        temp = create_new_node(value);
        temp->next = (*head);
        (*head) = temp;
    }
}
