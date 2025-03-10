/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:33:25 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/18 12:52:19 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*ft_sub_process(char **argv)
{
	t_stack		*a;
	char		**tmp;
	int			i;
	long long	j;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1], 32);
	while (tmp[i])
	{
		j = ft_atoi2(tmp[i]);
		if (j > INT_MAX || j < INT_MIN)
		{
			ft_freestr(tmp);
			free(tmp);
			ft_error("Error\nSome arguments are invalids.\n");
		}
		ft_add_back(&a, ft_stack_new(j));
		i++;
	}
	ft_freestr(tmp);
	free(tmp);
	return (a);
}

t_stack	*ft_process(int argc, char **argv)
{
	t_stack		*a;
	int			i;
	long long	j;

	i = 1;
	a = NULL;
	if (argc < 2)
		ft_error("");
	if (argc == 2)
		a = ft_sub_process(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi2(argv[i]);
			if (j > INT_MAX || j < INT_MIN)
				ft_error("Error\nSome arguments are invalids.\n");
			ft_add_back(&a, ft_stack_new(j));
			i++;
		}
	}
	return (a);
}
