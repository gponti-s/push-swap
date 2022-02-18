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

void	struct_inicialazer(t_error *error)
{
	error->FEW_ARGUMENT = 0;
	error->IS_NOT_DIGIT = 0;
	error->SORTED = 1;
	error->REPEATED = 0;
}

void	error_handle(int argc, char **argv, t_error *error)
{
	if (argc <= 2)
	{
		error->FEW_ARGUMENT = 1;
		error_output(error);
	}
	check_digit(argv, error);
	check_repeated(argv, error);
}

void	check_digit(char **argv, t_error *error)
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

void	check_repeated(char **argv, t_error *error)
{
	int	i;
	int	j;
	int	value1;
	int	value2;

	i = 1;
	while (argv[i])
	{
		value1 = ft_atoi(argv[i]);
		j = i + 1;
		while (argv[j])
		{
			value2 = ft_atoi(argv[j]);
			if (value1 == value2)
				error->REPEATED = 1;
			else if (value2 < value1)
				error->SORTED = 0;
			j++;
		}
		i++;
	}
	error_output(error);
}

void	error_output(t_error *error)
{
	if (error->FEW_ARGUMENT == 1)
		ft_putstr_fd("Error - Too few arguments", 1);
	else if (error->IS_NOT_DIGIT == 1)
		ft_putstr_fd("Error - Argumet is not digit", 1);
	else if (error->REPEATED == 1)
		ft_putstr_fd("Error - Argumet repeated", 1);
	else if (error->SORTED == 1)
		ft_putstr_fd("Error - Argumet sorted", 1);
	else
		return ;
	exit(1);
}
