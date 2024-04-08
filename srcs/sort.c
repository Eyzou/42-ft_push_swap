/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:02:36 by marvin            #+#    #+#             */
/*   Updated: 2024/04/08 18:04:51 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_sort_b_until_3(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	while (ft_lst_size(*a) > 3 && !check_if_sorted(*a))
	{
		tmp = *a;
		i = how_to_rotate_atob(*a, *b);
		while (i >= 0)
		{
			if (i == case_rarb(*a, *b, tmp->nbr))
				i = ft_apply_rarb(a, b, tmp->nbr, 'a');
			if (i == case_rrarrb(*a, *b, tmp->nbr))
				i = ft_apply_rrarrb(a, b, tmp->nbr, 'a');
			if (i == case_rarrb(*a, *b, tmp->nbr))
				i = ft_apply_rarrb(a, b, tmp->nbr, 'a');
			if (i == case_rrarb(*a, *b, tmp->nbr))
				i = ft_apply_rrarb(a, b, tmp->nbr, 'a');
		}
	}
}

void	ft_sort_three(t_stack **a)
{
	if (ft_min(*a) == (*a)->nbr)
	{
		ft_rra(a, 0);
		ft_sa(a, 0);
	}
	else if (ft_max(*a) == (*a)->nbr)
	{
		ft_ra(a, 0);
		if (!check_if_sorted(*a))
			ft_sa(a, 0);
	}
	else
	{
		if (ft_find_index(*a, ft_max(*a)) == 1)
			ft_rra(a, 0);
		else
			ft_sa(a, 0);
	}
}

t_stack	*ft_sort_b(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (ft_lst_size(*a) > 3 && !check_if_sorted(*a))
		ft_pb(a, &b, 0);
	print_stack(b);
	if (ft_lst_size(*a) > 3 && !check_if_sorted(*a))
		ft_pb(a, &b, 0);
	if (ft_lst_size(*a) > 3 && !check_if_sorted(*a))
		ft_sort_b_until_3(a, &b);
	if (!check_if_sorted(*a))
		ft_sort_three(a);
	return (b);
}

t_stack	**ft_sort_a(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	while (*b)
	{
		tmp = *b;
		i = how_to_rotate_btoa(*a, *b);
		while (i >= 0)
		{
			if (i == case_rarb_a(*a, *b, tmp->nbr))
				i = ft_apply_rarb(a, b, tmp->nbr, 'b');
			else if (i == case_rarrb_a(*a, *b, tmp->nbr))
				i = ft_apply_rarrb(a, b, tmp->nbr, 'b');
			else if (i == case_rrarrb_a(*a, *b, tmp->nbr))
				i = ft_apply_rrarrb(a, b, tmp->nbr, 'b');
			else if (i == case_rrarb_a(*a, *b, tmp->nbr))
				i = ft_apply_rrarb(a, b, tmp->nbr, 'b');
			else
				tmp = tmp->next;
		}
	}
	return (a);
}

void	ft_sort(t_stack **a)
{
	t_stack	*b;

	// int     i;
	b = NULL;
	if (ft_lst_size(*a) == 2)
		ft_sa(a, 0);
	else
	{
		ft_printf("il faut mieux trier la liste\n");
		b = ft_sort_b(a);
	}
	print_stack(b);
}
