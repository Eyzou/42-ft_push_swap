/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 17:35:43 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/08 17:39:48 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_rra(t_stack **a, int print)
{
	t_stack *tmp;
	int i;

	if (!*a || !(*a)->next)
		return ;
	i = 0;
	tmp = *a;
	while ((*a)->next)
	{
		*a = (*a)->next;
		i++;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (print == 0)
		write(1, "rra\n", 4);
}


void	ft_rrb(t_stack **b, int print)
{
	t_stack *tmp;
	int i;

	if (!*b || !(*b)->next)
		return ;
	i = 0;
	tmp = *b;
	while ((*b)->next)
	{
		*b = (*b)->next;
		i++;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (print == 0)
		write(1, "rrb\n", 4);
}
void ft_rrr(t_stack **a, t_stack **b, int print)
{
	t_stack	*tmp;
	int		i;

	if (!*a || !((*a)->next) || !*b || !((*b)->next))
		return ;
	i = 0;
	tmp = *a;
	while ((*a)->next)
	{
		i++;
		*a = (*a)->next;
	}
	(*a)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	i = 0;
	tmp = *b;
	while ((*b)->next)
	{
		i++;
		*b = (*b)->next;
	}
	(*b)->next = tmp;
	while (i > 1)
	{
		tmp = tmp->next;
		i--;
	}
	tmp->next = NULL;
	if (print == 0)
		write(1, "rrr\n", 4);
}