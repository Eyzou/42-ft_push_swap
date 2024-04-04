/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_checks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:45:15 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/04 16:42:06 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_dup(t_stack *a)
{
	t_stack *tmp;
	while (a)
	{
		tmp = a->next;
		while(tmp)
		{
			if(a->nbr == tmp->nbr)
				return(1);
			tmp = tmp->next;
		}
		a = a->next;
	}
	return(0);
}

void	check_errors(char **argv, int i, int j)
{
	while(argv[i])
	{
		j = 0;
		while(argv[i][j] != '\0')
		{
			if(argv[i][j] == '-' || argv[i][j] == '+')
			{
				j++;
				if(!ft_isdigit(argv[i][j]))
					ft_error("Error\nThis is not a number!\n");
			}
			if(ft_isalpha(argv[i][j]))
					ft_error("Error\nThis is not a number!\n");
			else if(ft_isdigit(argv[i][j]))
			{
				j++;
				if(argv[i][j] == '\0')
					break ;
				if(!ft_isdigit(argv[i][j]) && argv[i][j] != ' ')
					ft_error("Error\nThis is not a number!\n");
			}
			j++;
		}
		i++;
	}
}

int check_if_sorted(t_stack *a)
{
	int i;

	i = a->nbr;
	while(a)
	{
		if(i > a->nbr)
			return(0);
		i = a->nbr;
		a = a->next;
	}
	return (1);
}


