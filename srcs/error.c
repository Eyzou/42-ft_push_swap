/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:32:19 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/08 17:47:19 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(char *str)
{
	ft_printf("%s", str);
	exit(1);
}
void free_str(char **lst)
{
	int i;

	i = 0;
	if(!lst)
		return ;
	if(!*lst)
		return ;
	while(lst[i])
	{
		free(lst[i]);
		i++;
	}
}

void free_stack(t_stack **stack)
{
	t_stack *tmp;

	if(!stack)
		return ;
	while (*stack)
	{
		tmp =(*stack)->next;
		(*stack)->nbr = 0;
		free(*stack);
		*stack = tmp;
	}
}