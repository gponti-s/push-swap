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
	while (temp->next != NULL)
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
	i = 0;
	while (i < size)
	{
		printf("%d ->", list[i]);
		i++;
	}
	head_b = NULL; // Rember to cut off this!!

	//adding index in the Linked List
	i = -1;
	while (list[++i])
	{
		temp = head_a;
		while (temp->data != list[i])
			temp = temp->next;
		temp->index = i;
	}

}






/*
void	looKingFor_mini_max(node_t **head_a, node_t **head_b)
{
	node_t *temp;
	int minimal;
	int maximal;
	int position;
	int position_max;
	int size;

	temp = *head_a;
	position = 1;
	position_max = 1;
	size = 0;
	minimal = temp->data;
	maximal = temp->data;
	while (temp->next != NULL)
	{
		if (temp->data < minimal)
		{
			minimal = temp->data;
			position = size;
		}
		else if (temp->data > maximal)
		{
			maximal = temp->data;
			position_max = size;
		}
		temp = temp->next;
		size++;
	}
	// these conditions are necessary to reach the last number in the range.
	if (temp->data < minimal)
	{
		minimal = temp->data;
		position = size;
	}
	else if (temp->data > maximal)
	{
		maximal = temp->data;
		position_max = size;
	}
	printf("position_max: %d - position: %d - size: %d\n", position_max, position, size);

	//if (position < (size/2) || position_max == size)
	//send_minimal(head_a, head_b, position, size, minimal);
	//else
	send_maximal(head_a, head_b, position_max, size, maximal);

	if ((*head_a)->next != NULL)
		looKingFor_mini_max(head_a, head_b);
}

void	send_minimal(node_t **head_a, node_t **head_b, int position, int size, int minimal)
{
	while ((*head_a))
	{

		if ((*head_a)->data != minimal)
		{
			if ((*head_a)->next->data == minimal)
			{
				sa(head_a);
				pb(head_b, head_a);
				break;
			}
			else if (position == size)
			{
				rra(head_a);
				pb(head_b, head_a);
				break;
			}
			else
				ra(head_a);
		}
		else
		{
			pb(head_b, head_a);
			break;
		}
	}
}

void	send_maximal(node_t **head_a, node_t **head_b, int position, int size, int maximal)
{
	while ((*head_a))
	{

		if ((*head_a)->data != maximal)
		{
			if ((*head_a)->next->data == maximal)
			{
				sa(head_a);
				pb(head_b, head_a);
				//rb(head_b);
				return;
			}
			else if (position == size)
			{
				rra(head_a);
				pb(head_b, head_a);
				//rb(head_b);
				return;
			}
			else
				ra(head_a);
		}
		else
		{
			pb(head_b, head_a);
			//rb(head_b);
			return;
		}
	}
}*/
