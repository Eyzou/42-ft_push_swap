/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 13:25:18 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/04 14:27:05 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stack_a(t_stack *a)
{
	t_stack *tmp;
	int i;
	tmp = a;
	while(tmp->next != NULL)
	{
		ft_printf("%i\n",tmp->nbr);
		tmp = tmp->next;
		i++;
	}
	free(tmp);
}

