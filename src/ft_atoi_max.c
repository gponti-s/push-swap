/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_max.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:37:42 by gponti-s          #+#    #+#             */
/*   Updated: 2022/02/23 14:37:44 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include "libft.h"

long	ft_atoi_max(const char *str)
{
	int		s;
	long	r;

	s = 1;
	r = 0;
	if (*str != '\0')
	{
		while ((*str == '\t') || (*str == '\n') || (*str == '\v')
			|| (*str == '\f') || (*str == '\r') || (*str == ' '))
			str++;
		while (*str == '-' || *str == '+')
		{
			if (*str == '-')
				s *= (-1);
			str++;
			if (*str == '-' || *str == '+')
				return (0);
		}
		while (*str >= '0' && *str <= '9')
		{
			r = r * 10 + ((*str) - '0');
			str++;
		}
	}
	return (s * r);
}
