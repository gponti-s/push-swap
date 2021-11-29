/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:35:53 by gponti-s          #+#    #+#             */
/*   Updated: 2021/11/29 19:35:56 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sorting_five(node_t *head_a, node_t *head_b)
{
    pb(&head_b,&head_a);
    pb(&head_b, &head_a);
    sorting_three(head_a);
    pa(&head_a, &head_b);
    if (head_a->data > head_a->next->next->next->next->data)
        ra(&head_a);
    pa(&head_a, &head_b);
    print_list(head_a);
}