/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:26:56 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/04 15:51:12 by ehamm            ###   ########.fr       */
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
		add_last_node(&a,store_int_to_list(j));
		i++;
	}
	free_str(tmp);
	free(tmp);
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
			add_last_node(&a,store_int_to_list(j));
			i++;
		}
	}
	return(a);
 }
