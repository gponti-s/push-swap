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

void	push(node_t **stack_dst, node_t **stack_src)
{
	node_t	*temp;
	node_t	*temp2;

	if (!(*stack_src))
		return ;
	temp = *stack_src;
	temp2 = *stack_dst;
	(*stack_src) = temp->next;
	(*stack_dst) = temp;
	(*stack_dst)->next = temp2;
}
