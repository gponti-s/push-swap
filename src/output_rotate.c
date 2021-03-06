/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:34:11 by gponti-s          #+#    #+#             */
/*   Updated: 2021/11/29 12:34:13 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_node **stack)
{
	rotate(stack);
	ft_putstr_fd("ra\n", 1);
}

void	rb(t_node **stack)
{
	rotate(stack);
	ft_putstr_fd("rb\n", 1);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	doble_stack_rotate(stack_a, stack_b);
	ft_putstr_fd("rr\n", 1);
}
