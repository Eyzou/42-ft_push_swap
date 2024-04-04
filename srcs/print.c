/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:25:18 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/04 16:26:35 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stack_a(t_stack *a)
{
	t_stack *tmp;
	tmp = a;
	ft_printf("The stack_a is:\n");
	while(tmp != NULL)
	{
		ft_printf("%i\n",tmp->nbr);
		tmp = tmp->next;
	}
	free(tmp);
}

