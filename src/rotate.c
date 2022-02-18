/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:22:25 by gponti-s          #+#    #+#             */
/*   Updated: 2022/02/16 15:22:27 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate(t_node **stack)
{
	t_node	*temp;
	t_node	*end;

	end = *stack;
	while (end->next != NULL)
		end = end->next;
	temp = *stack;
	*stack = temp->next;
	end->next = temp;
	temp->next = NULL;
}

void	doble_stack_rotate(t_node **stack_a, t_node **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
