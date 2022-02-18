/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:19:16 by gponti-s          #+#    #+#             */
/*   Updated: 2022/02/16 16:19:19 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_size(t_node **head_a)
{
	t_node	*temp;
	int		size;

	temp = *head_a;
	size = 1;
	while (temp->next != NULL)
	{
		temp = temp->next;
		size++;
	}
	return (size);
}
