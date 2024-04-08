/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_and_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:15:11 by marvin            #+#    #+#             */
/*   Updated: 2024/04/08 17:31:11 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// now that we have the number of rotations its actually rotates in the sane direction / reverse same /reverse reverse same reverse
int	ft_apply_rarb(t_stack **a, t_stack **b, int nbr, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != nbr && ft_find_place_b(*b, nbr) > 0)
			ft_rr(a, b, 0);
		while ((*a)->nbr != nbr)
			ft_ra(a, 0);
		while (ft_find_place_b(*b, nbr) > 0)
			ft_rb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != nbr && ft_find_place_a(*a, nbr) > 0)
			ft_rr(a, b, 0);
		while ((*b)->nbr != nbr)
			ft_rb(b, 0);
		while (ft_find_place_a(*a, nbr) > 0)
			ft_ra(a, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarrb(t_stack **a, t_stack **b, int nbr, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != nbr && ft_find_place_b(*b, nbr) > 0)
			ft_rrr(a, b, 0);
		while ((*a)->nbr != nbr)
			ft_rra(a, 0);
		while (ft_find_place_b(*b, nbr) > 0)
			ft_rrb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != nbr && ft_find_place_a(*a, nbr) > 0)
			ft_rrr(a, b, 0);
		while ((*b)->nbr != nbr)
			ft_rrb(b, 0);
		while (ft_find_place_a(*a, nbr) > 0)
			ft_rra(a, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rrarb(t_stack **a, t_stack **b, int nbr, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != nbr)
			ft_rra(a, 0);
		while (ft_find_place_b(*b, nbr) > 0)
			ft_rb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != nbr)
			ft_rb(b, 0);
		while (ft_find_place_a(*a, nbr) > 0)
			ft_rra(a, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}

int	ft_apply_rarrb(t_stack **a, t_stack **b, int nbr, char s)
{
	if (s == 'a')
	{
		while ((*a)->nbr != nbr)
			ft_ra(a, 0);
		while (ft_find_place_b(*b, nbr) > 0)
			ft_rrb(b, 0);
		ft_pb(a, b, 0);
	}
	else
	{
		while ((*b)->nbr != nbr)
			ft_rrb(b, 0);
		while (ft_find_place_a(*a, nbr) > 0)
			ft_ra(a, 0);
		ft_pa(a, b, 0);
	}
	return (-1);
}