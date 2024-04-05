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

// t_stack *find_end(t_stack *a)
// {
// 	t_stack *tmp;
// 	// t_stack *bottom;

// 	if(a == NULL)
// 		return (NULL);
// 	while(a->next != NULL)
// 		tmp = tmp->next;
// 	// bottom = tmp;
// 	ft_printf("%i",tmp->nbr);
// 	return (tmp);

// }

void	print_stack(t_stack *stack)
{
	ft_printf("The stack is:\n");
	while(stack != NULL)
	{
		ft_printf("%i\n",stack->nbr);
		stack = stack->next;
	}
	free(stack);
}
