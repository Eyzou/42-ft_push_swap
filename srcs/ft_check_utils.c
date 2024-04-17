/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:23:06 by elo               #+#    #+#             */
/*   Updated: 2024/04/17 11:15:33 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	sign(int c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	space(int c)
{
	if (c == ' ')
		return (1);
	return (0);
}

//function to check if given arguments is valid
int	check_error(char **argv, int i, int j)
{
	while (argv[i])
	{
		j = 0;
		while ((argv[i][j] != '\0'))
		{
			if (sign(argv[i][j]))
			{
				j++;
				if (!ft_isdigit(argv[i][j]))
					return (1);
			}
			else if (ft_isdigit(argv[i][j]))
			{
				j++;
				if (argv[i][j] == '\0')
					break ;
				if (!ft_isdigit(argv[i][j]) && !space(argv[i][j]))
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_checksorted(t_stack *stack_a)
{
	int	i;

	i = stack_a->nbr;
	while (stack_a)
	{
		if (i > stack_a->nbr)
			return (0);
		i = stack_a->nbr;
		stack_a = stack_a->next;
	}
	return (1);
}

void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_lst_last(*stack))->next = stack_new;
}