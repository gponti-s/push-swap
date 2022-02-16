/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:20:01 by gponti-s          #+#    #+#             */
/*   Updated: 2022/02/16 15:20:03 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate(node_t **stack)
{
	node_t	*head;
	node_t	*tail;
	int		i;

	if ((*stack) != NULL && (*stack)->next != NULL)
	{
		head = (*stack);
		tail = (*stack);
		i = 0;
		while (tail->next != NULL)
		{
			tail = tail->next;
			i++;
		}
		tail->next = head;
		(*stack) = tail;
		while (i-- > 0)
			tail = tail->next;
		tail->next = NULL;
	}
}

void	doble_stack_reverse_rotate(node_t **stack_a, node_t **stack_b)
{
	reverse_rotate(stack_a);
	reverse_rotate(stack_b);
}
