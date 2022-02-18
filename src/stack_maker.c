/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_maker.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:30:04 by gponti-s          #+#    #+#             */
/*   Updated: 2022/02/16 15:30:07 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_new_node(int value)
{
	t_node	*result;

	result = malloc(sizeof(t_node));
	result->data = value;
	result->next = NULL;
	result->index = 0;
	return (result);
}

void	stack_maker(t_node **head, int size, char **string)
{
	int		i;
	int		value;
	t_node	*temp;

	i = (size - 1);
	while (i > 0)
	{
		value = atoi(string[i--]);
		temp = create_new_node(value);
		temp->next = (*head);
		(*head) = temp;
	}
}
