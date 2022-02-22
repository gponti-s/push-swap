/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_four.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 18:53:50 by gponti-s          #+#    #+#             */
/*   Updated: 2022/02/22 18:53:52 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_four(t_node **head_a, t_node **head_b, int size)
{
	push_stack_b(head_a, head_b, size);
	if ((*head_b)->data < (*head_a)->data)
		pa(head_a, head_b);
	else if ((*head_b)->data < (*head_a)->next->data)
	{
		ra(head_a);
		pa(head_a, head_b);
		rra(head_a);
	}
	else if ((*head_b)->data < (*head_a)->next->next->data)
	{
		ra(head_a);
		ra(head_a);
		pa(head_a, head_b);
		rra(head_a);
		rra(head_a);
	}
	else
	{
		pa(head_a, head_b);
		ra(head_a);
	}
}
