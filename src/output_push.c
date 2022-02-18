/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:28:41 by gponti-s          #+#    #+#             */
/*   Updated: 2021/11/29 12:28:43 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_node **stack_dst, t_node **stack_src)
{
	push(stack_dst, stack_src);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_node **stack_dst, t_node **stack_src)
{
	push(stack_dst, stack_src);
	ft_putstr_fd("pb\n", 1);
}
