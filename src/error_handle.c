/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 16:34:18 by gponti-s          #+#    #+#             */
/*   Updated: 2021/11/29 16:34:21 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	struct_inicialazer(error_t *error)
{
	error->FEW_ARGUMENT = 0;
	error->IS_NOT_DIGIT = 0;
	error->SORTED = 0;
	error->REPEATED = 0;
}

void	error_handle(int argc, char **argv, error_t *error)
{
	if (argc <= 2)
	{
		error->FEW_ARGUMENT = 1;
		error_output(error);
	}
	check_digit(argv, error);
}

void	check_digit(char **argv, error_t *error)
{
	int	i;
	int	j;
	int	result;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] == '-' || argv[i][j] == '+')
				j++;
			result = ft_isdigit(argv[i][j]);
			if (result == 0)
			{
				error->IS_NOT_DIGIT = 1;
				error_output(error);
			}
			j++;
		}
		i++;
	}
}

void	error_output(error_t *error)
{
	if (error->FEW_ARGUMENT == 1)
		ft_putstr_fd("Error - Too few arguments", 1);
	else if (error->IS_NOT_DIGIT == 1)
		ft_putstr_fd("Error - Argumet is not digit", 1);
	exit(1);	
}

/*

cuidado com:
- 0000001 1 (argumentos do tipo string e repetidos - o atoi resolve)
- verificar se todos os numeros ja estao ordenados (is sorted)
*/
