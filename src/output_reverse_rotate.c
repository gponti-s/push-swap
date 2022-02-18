/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_reverse_rotate.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:38:51 by gponti-s          #+#    #+#             */
/*   Updated: 2021/11/29 12:38:53 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_node **stack)
{
	reverse_rotate(stack);
	ft_putstr_fd("rra\n", 1);
}

void	rrb(t_node **stack)
{
	reverse_rotate(stack);
	ft_putstr_fd("rrb\n", 1);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	doble_stack_reverse_rotate(stack_a, stack_b);
	ft_putstr_fd("rrr\n", 1);
}
