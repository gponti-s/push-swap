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

void	sorting_hundred(node_t **head_a, node_t **head_b, int size)
{
	int list[size - 1];
	int i;
	int j;
	int t;
	node_t *temp;
	
	//making the array
	temp = *head_a;
	i = 0;
	while (temp != NULL)
	{
		list[i] = temp->data;
		temp = temp->next;
		i++;
	}

	//sorting the array
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

	// printing Array
	// i = 0;
	// printf("The array sorted: \n");
	// while (i < size)
	// {
	// 	printf("%d ->", list[i]);
	// 	i++;
	// }

	//adding index in the Linked List
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
	
	// printf("The index: \n");
	// temp = *head_a;
	// while (temp)
	// {
	// 	ft_putnbr_fd(temp->index, 1);
	// 	write (1, " = ", 3);
	// 	temp = temp->next;
	// }
	// write(1, "\n", 1);

	// ****************** Bitwise Operations ****************
	int	bit_range = 0;


	i = 0;
	while (size >> bit_range)
		bit_range++;
	while (/*(!s_search(*a)*/ (i <= bit_range))
	{
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
	//print_list(*head_a);

}

