/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 16:35:59 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/04 16:36:09 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack *store_int_to_list(int content)
{
	t_stack *new;

	new = malloc(sizeof(t_stack));
	if (!new)
		ft_error("Error\n");
	new->nbr = content;
	new->next = NULL;
	return (new);
}
t_stack *ft_lst_last(t_stack *lst)
{
	while (lst && lst->next)
		lst = lst->next;
	return (lst);
}

int ft_lst_size(t_stack *lst)
{
	int size;

	size = 0;
	if (lst == NULL)
		return (0);
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}

// add a node at the end of the list
void add_last_node(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_lst_last(*stack)->next = stack_new);
}

int ft_min(t_stack *a)
{
	int i;
	i = a->nbr;
	while (a)
	{
		if (a->nbr < i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}

int ft_max(t_stack *a)
{
	int i;
	i = a->nbr;
	while (a)
	{
		if (a->nbr > i)
			i = a->nbr;
		a = a->next;
	}
	return (i);
}