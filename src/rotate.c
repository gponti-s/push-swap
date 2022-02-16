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

void	rotate(node_t **stack)
{
	node_t	*temp;
	node_t	*end;

	end = *stack;
	while (end->next != NULL)
		end = end->next;
	temp = *stack;
	*stack = temp->next;
	end->next = temp;
	temp->next = NULL;
}

void	doble_stack_rotate(node_t **stack_a, node_t **stack_b)
{
	rotate(stack_a);
	rotate(stack_b);
}
