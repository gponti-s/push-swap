/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:17:04 by gponti-s          #+#    #+#             */
/*   Updated: 2022/02/16 15:17:08 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_node **stack_dst, t_node **stack_src)
{
	t_node	*temp;
	t_node	*temp2;

	if (!(*stack_src))
		return ;
	temp = *stack_src;
	temp2 = *stack_dst;
	(*stack_src) = temp->next;
	(*stack_dst) = temp;
	(*stack_dst)->next = temp2;
}
