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

void	parsing_check(int argc, char **argv)
{
	t_prog_state	prog_state;

	if (argc <= 1)
		prog_state = FEW_ARGUMENTS;
	else
		prog_state = STATE_OK;
	if (prog_state == STATE_OK)
		prog_state = check_digit(argv);
	if (prog_state == STATE_OK)
		prog_state = check_repeated(argv);
	if (prog_state != STATE_OK)
		error_print(prog_state);
}

t_prog_state	check_digit(char **argv)
{
	int			i;
	int			j;
	long long	result;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if ((argv[i][j] == '-' || argv[i][j] == '+') && j == 0)
				j++;
			result = ft_isdigit(argv[i][j]);
			if (result == 0)
				return (IS_NOT_DIGIT);
			result = ft_atoi_max(&argv[i][j]);
			if (result >= INT_MAX || result <= INT_MIN)
				return (ERROR);
			j++;
		}
		i++;
	}
	return (STATE_OK);
}

t_prog_state	check_repeated(char **argv)
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
				return (REPEATED);
			j++;
		}
		i++;
	}
	return (STATE_OK);
}

void	error_print(t_prog_state prog_state)
{
	if (prog_state == FEW_ARGUMENTS)
		ft_putstr_fd("Error - Too few arguments", 1);
	else if (prog_state == IS_NOT_DIGIT)
		ft_putstr_fd("Error - Argumet is not digit", 1);
	else if (prog_state == REPEATED)
		ft_putstr_fd("Error - Argumet repeated", 1);
	else if (prog_state == ERROR)
		ft_putstr_fd("Error", 1);
	else
		return ;
	exit(1);
}
