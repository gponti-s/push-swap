/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gponti-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:15:29 by gponti-s          #+#    #+#             */
/*   Updated: 2022/02/22 19:15:31 by gponti-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft.h"

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef enum e_prog_state{
	STATE_OK,
	FEW_ARGUMENTS,
	IS_NOT_DIGIT,
	REPEATED,
	ERROR,
}				t_prog_state;

typedef struct s_a
{
	int			data;
	int			index;

	struct s_a	*next;
}				t_node;

// ***** Main - push_swap *****
void			print_list(t_node *stack);

//error_handle
void			parsing_check(int argc, char **argv);
t_prog_state	check_digit(char **argv);
t_prog_state	check_repeated(char **argv);
void			error_print(t_prog_state prog_state);

//stack_maker
t_node			*create_new_node(int value);
void			stack_maker(t_node **head, int size, char **string);

//list_size
int				list_size(t_node **head_a);

//swap
void			swap(t_node **head);
void			doble_stack_swap(t_node **stack_a, t_node **stack_b);

void			push(t_node **stack_dst, t_node **stack_src);

//rotate
void			rotate(t_node **stack);
void			doble_stack_rotate(t_node **stack_a, t_node **stack_b);

//reverse_rotate
void			reverse_rotate(t_node **stack);
void			doble_stack_reverse_rotate(t_node **stack_a, t_node **stack_b);

// output_swap
void			sa(t_node **head);
void			sb(t_node **head);
void			ss(t_node **stack_a, t_node **stack_b);

//output_push
void			pa(t_node **stack_dst, t_node **stack_src);
void			pb(t_node **stack_dst, t_node **stack_src);

//output_rotate
void			ra(t_node **stack);
void			rb(t_node **stack);
void			rr(t_node **stack_a, t_node **stack_b);

//output_reverse_rotate
void			rra(t_node **stack);
void			rrb(t_node **stack);
void			rrr(t_node **stack_a, t_node **stack_b);

//sorting_two
void			sorting_two(t_node **head_a);

//sorting_three
void			sorting_three(t_node **head_a);

//print_list
void			print_list(t_node *stack);

//sorting_five
void			sorting_five(t_node **head_a, t_node **head_b, int size);
void			push_stack_b(t_node **head_a, t_node **head_b, int size);
void			replace_second(t_node **head_a, t_node **head_b);
int				replace_penultimate(t_node **head_a, t_node **head_b, int i);
int				replace_last(t_node **head_a, t_node **head_b, int i);

void			sorting_four(t_node **head_a, t_node **head_b, int size);

//sorting_hig_numbers
void			sorting_big_numbers(t_node **head_a, t_node **head_b, int size);
void			making_array(t_node **head_a, int size);
void			sorting_array(t_node **head_a, int size, int list[]);
void			array_index_struct(t_node **head_a, int size, int list[]);

//Check_sort
int				check_sorted(t_node **head_a);

long			ft_atoi_max(const char *str);

#endif
