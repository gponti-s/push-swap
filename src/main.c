/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 16:22:18 by gponti-s          #+#    #+#             */
/*   Updated: 2022/02/22 16:22:23 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_node	*head_a;
	t_node	*head_b;
	int		size;

	head_b = NULL;
	head_a = NULL;
	parsing_check(argc, argv);
	stack_maker(&head_a, argc, argv);
	size = list_size(&head_a);
	if (size == 1)
		return (0);
	else if (size == 2)
		sorting_two(&head_a);
	else if (size == 3)
		sorting_three(&head_a);
	else if (size == 4)
		sorting_four(&head_a, &head_b, size);
	else if (size == 5)
		sorting_five(&head_a, &head_b, size);
	else
		sorting_big_numbers(&head_a, &head_b, size);
	return (0);
}
