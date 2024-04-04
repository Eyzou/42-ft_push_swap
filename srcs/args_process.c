/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_process.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:26:56 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/04 14:30:30 by ehamm            ###   ########.fr       */
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
	ft_printf("passe la boucle\n");
	print_stack_a(a);
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
	{
		ft_printf("OK avant string to int\n");
		a = arg_string_to_integer(argv);
		ft_printf("OK string to int\n");
	}
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
