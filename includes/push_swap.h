/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:11:58 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/04 11:29:56 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

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
void	ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack	*ft_lst_last(t_stack *lst);
int		check_dup(t_stack *a);

void	ft_error(char *str);
void 	free_str(char **lst);

#endif