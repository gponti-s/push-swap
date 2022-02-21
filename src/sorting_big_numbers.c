/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_hundred2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 15:26:14 by gponti-s          #+#    #+#             */
/*   Updated: 2022/02/16 15:26:18 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ****************** Bitwise Operations ****************
** This function use the Bitewis Operations to sort the numbers
** The whole ideia is that, atributing a index to each number
** using an array, sorting this array......
*/

void	sorting_big_numbers(t_node **head_a, t_node **head_b, int size)
{
	int	i;
	int	j;
	int	bit_range;

	making_array(head_a, size);
	bit_range = 0;
	i = 0;
	while (size >> bit_range)
		bit_range++;
	while ((i <= bit_range))
	{
		if (check_sorted(head_a) == 1)
			return;
		j = size + 1;
		while (--j > 0)
		{
			if ((((*head_a)->index >> i) & 1) == 0)
				pb(head_b, head_a);
			else if (j)
				ra(head_a);
		}
		while (*head_b)
			pa(head_a, head_b);
		i++;
	}
}

/* *********************** Array - Index ***********************
** The functions below are responseble to, respectivile: make
** an array with all numbers of stack "a"; sorting the numbers
** into array; atribute the array's index to each number in the
** stack "a".
*/

void	making_array(t_node **head_a, int size)
{
	int		list[size - 1];
	int		i;
	t_node	*temp;

	temp = *head_a;
	i = 0;
	while (temp != NULL)
	{
		list[i] = temp->data;
		temp = temp->next;
		i++;
	}
	sorting_array(head_a, size, list);
}

void	sorting_array(t_node **head_a, int size, int list[])
{
	int	i;
	int	j;
	int	t;

	t = 0;
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (list[i] > list[j])
			{
				t = list[i];
				list[i] = list[j];
				list[j] = t;
			}
			j++;
		}
		i++;
	}
	array_index_struct(head_a, size, list);
}

void	array_index_struct(t_node **head_a, int size, int list[])
{
	int		t;
	int		i;
	t_node	*temp;

	t = 0;
	i = 0;
	while (i < size)
	{
		temp = *head_a;
		while (list[i] != temp->data)
		{
			temp = temp->next;
		}
		temp->index = i;
		i++;
	}
}
