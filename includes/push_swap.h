/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:11:58 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/04 16:42:45 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

/*# define IS_TOP
#ifdef */

# include "../libft/libft.h"
# include <unistd.h> //write
# include <stdlib.h> //malloc

typedef struct s_stack
{
	long	nbr;
	long	index;
	struct s_stack *next;
	struct s_stack *prev;
} t_stack;

t_stack *arg_string_to_integer(char **argv);
t_stack *process_arg(int argc, char **argv);

//utils
t_stack *store_int_to_list(int content);
void	add_last_node(t_stack **stack, t_stack *stack_new);
t_stack	*ft_lst_last(t_stack *lst);
int		check_dup(t_stack *a);
int		check_if_sorted(t_stack *a);
void	print_stack_a(t_stack *a);

//errors
void	check_errors(char **argv,int i,int j);
void	ft_error(char *str);
void 	free_str(char **lst);


#endif