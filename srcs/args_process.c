/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elo <elo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:33:25 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/11 17:54:44 by elo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// This function works and sorts the stacks
// in case of they are passed in between quotation
// marks. In this scenario, this function takes the
// string, and splits the numbers in order to create
// seperated integer number.
t_stack	*ft_sub_process(char **argv)
{
	t_stack	*a;
	char	**tmp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	while (tmp[i])
	{
		j = ft_atoi(tmp[i]);
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (a);
}

// This function does three things.
// 1. It checks if the number of input is less than 2.
// 2. It checks if the number of input is equal to 2.
//    If it is, it means it is a quoted string. Call
//	  another function. <ft_sub_process>
// 3. It checks if the number of input is greater than 2.
//     If it is, it lists the arguements.
t_stack	*ft_process(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (argc < 2)
		ft_error();
	if (argc == 2)
		a = ft_sub_process(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi(argv[i]);
			ft_add_back(&a, ft_stack_new(j));
			i++;
		}
	}
	return (a);
}

t_stack	*ft_parse_args_quoted(char **argv)
{
	t_stack	*stack_a;
	char	**tmp;

	stack_a = NULL;
	tmp = ft_split(argv[1], 32);
	list_args(tmp, &stack_a);
	ft_freestr(tmp);
	free(tmp);
	return (stack_a);
}

// This function does three things.
// 1. It checks if the number of input is less than 2.
// 2. It checks if the number of input is equal to 2.
//    If it is, it means it is a quoted string.
// 3. It checks if the number of input is greater than 2.
//     If it is, it lists the arguements.
t_stack	*ft_parse(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (argc < 2)
		ft_error();
	else if (argc == 2)
		stack_a = ft_parse_args_quoted(argv);
	else
	{
		list_args(argv, &stack_a);
	}
	return (stack_a);
}
