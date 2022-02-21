/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sorted.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 17:13:41 by gponti-s          #+#    #+#             */
/*   Updated: 2022/02/18 17:13:43 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_sorted(t_node **head_a)
{
    t_node *temp;
    
    temp = *head_a;
    while (temp->next != NULL)
    {
        if (temp->data < temp->next->data)
            temp = temp->next;
        else
            return 0;
    }
    return 1;
}
