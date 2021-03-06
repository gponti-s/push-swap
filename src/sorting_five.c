/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_five.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:35:53 by gponti-s          #+#    #+#             */
/*   Updated: 2021/11/29 19:35:56 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_five(t_node **head_a, t_node **head_b, int size)
{
	int	i;

	push_stack_b(head_a, head_b, size);
	i = 0;
	while (i < 2)
	{
		if ((*head_b)->data < (*head_a)->data)
			pa(head_a, head_b);
		else if ((*head_b)->data < (*head_a)->next->data)
			replace_second(head_a, head_b);
		else if (i == 0 && (*head_b)->data < (*head_a)->next->next->data)
			i = replace_penultimate(head_a, head_b, i);
		else if (i == 1)
		{
			if ((*head_b)->data < (*head_a)->next->next->next->data)
				replace_penultimate(head_a, head_b, i);
		}
		else
			i = replace_last(head_a, head_b, i);
		i++;
	}
}

void	replace_second(t_node **head_a, t_node **head_b)
{
	if ((*head_b)->data < (*head_a)->data)
		pa(head_a, head_b);
	else if ((*head_b)->data < (*head_a)->next->data)
	{
		ra(head_a);
		pa(head_a, head_b);
		rra(head_a);
	}
}

void	push_stack_b(t_node **head_a, t_node **head_b, int size)
{
	pb(head_b, head_a);
	if (size == 5)
		pb(head_b, head_a);
	sorting_three(head_a);
	if (size == 5)
		if ((*head_b)->data < (*head_b)->next->data)
			sb(head_b);
}

int	replace_penultimate(t_node **head_a, t_node **head_b, int i)
{
	rra(head_a);
	pa(head_a, head_b);
	if (i == 0 && (*head_b)->data > (*head_a)->next->next->data
		&& (*head_b)->data > (*head_a)->next->next->next->data)
	{
		pa(head_a, head_b);
		ra(head_a);
		ra(head_a);
		ra(head_a);
		return (1);
	}
	ra(head_a);
	ra(head_a);
	return (0);
}

int	replace_last(t_node **head_a, t_node **head_b, int i)
{
	pa(head_a, head_b);
	if (i == 0 && (*head_b)->data > (*head_a)->next->next->data
		&& (*head_b)->data < (*head_a)->next->next->next->data)
	{
		rra(head_a);
		pa(head_a, head_b);
		ra(head_a);
		ra(head_a);
		ra(head_a);
		return (1);
	}
	else if (i == 0 && (*head_b)->data > (*head_a)->next->next->next->data)
	{
		pa(head_a, head_b);
		ra(head_a);
		ra(head_a);
		return (1);
	}
	ra(head_a);
	return (0);
}
