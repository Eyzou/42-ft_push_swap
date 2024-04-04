/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arguments.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:26:56 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/03 17:20:23 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack *arg_string_to_integer(char **argv)
 {
	t_stack *a;
	int i;
	int j;
	char **tmp;

	a = NULL;
	i = 0;
	tmp = ft_split(argv[1],' ');
	while(tmp[i])
	{
		j = ft_atoi(tmp[i]);
		ft_add_back(&a,store_int_to_list(j));
		i++;
	}
	free(tmp);
	free_str(tmp);
	return(a);
 }


 t_stack *process_arg(int argc, char **argv)
 {
	t_stack *a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (argc == 2)
		a = arg_string_to_integer(argv);
	else
	{
		while(i < argc)
		{
			j = ft_atoi(argv[i]);
			ft_add_back(&a,store_int_to_list(j));
			i++;
		}
	}
	return(a);
 }
