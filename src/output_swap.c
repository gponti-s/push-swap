/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_swap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 12:22:16 by gponti-s          #+#    #+#             */
/*   Updated: 2021/11/29 12:22:18 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_node **head)
{
	swap(head);
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_node **head)
{
	swap(head);
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_node **stack_a, t_node **stack_b)
{
	doble_stack_swap(stack_a, stack_b);
	ft_putstr_fd("ss\n", 1);
}
