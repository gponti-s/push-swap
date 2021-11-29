/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 19:29:23 by gponti-s          #+#    #+#             */
/*   Updated: 2021/11/29 19:29:26 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void print_list(node_t *stack)
{
    while(stack)
    {
        ft_putnbr_fd(stack->data, 1);
        write (1, " - ", 3);
        stack = stack->next;
    }
    write(1, "\n", 1);
}