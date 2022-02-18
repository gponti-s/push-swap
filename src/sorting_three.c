/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 18:00:52 by gponti-s          #+#    #+#             */
/*   Updated: 2021/11/29 18:00:54 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_three(t_node **head_a)
{
	if ((*head_a)->data > (*head_a)->next->data
		&& (*head_a)->next->data < (*head_a)->next->next->data
		&& (*head_a)->data > (*head_a)->next->next->data)
		ra(head_a);
	else if ((*head_a)->data < (*head_a)->next->data
		&& (*head_a)->next->data > (*head_a)->next->next->data
		&& (*head_a)->data > (*head_a)->next->next->data)
		rra(head_a);
	else if ((*head_a)->data < (*head_a)->next->data
		&& (*head_a)->next->data < (*head_a)->next->next->data
		&& (*head_a)->data < (*head_a)->next->next->data)
		return ;
	else
		sa(head_a);
	if ((*head_a)->data > (*head_a)->next->data
		&& (*head_a)->next->data < (*head_a)->next->next->data
		&& (*head_a)->data > (*head_a)->next->next->data)
		ra(head_a);
	else if ((*head_a)->data < (*head_a)->next->data
		&& (*head_a)->next->data > (*head_a)->next->next->data
		&& (*head_a)->data > (*head_a)->next->next->data)
		rra(head_a);
}
