/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elo <elo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:18:51 by elo               #+#    #+#             */
/*   Updated: 2024/04/30 21:55:20 by elo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"
//nombre de rotations necessaire pour deplacer nb de a a b e
int	ft_case_rarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_b(b, c);
	if (i < ft_find_index(a, c))
		i = ft_find_index(a, c);
	return (i);
}

int	ft_case_rrarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_lst_size(b) - ft_find_place_b(b, c);
	if ((i < (ft_lst_size(a) - ft_find_index(a, c))) && ft_find_index(a, c))
		i = ft_lst_size(a) - ft_find_index(a, c);
	return (i);
}

int	ft_case_rrarb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(a, c))
		i = ft_lst_size(a) - ft_find_index(a, c);
	i = ft_find_place_b(b, c) + i;
	return (i);
}

int	ft_case_rarrb(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(b, c))
		i = ft_lst_size(b) - ft_find_place_b(b, c);
	i = ft_find_index(a, c) + i;
	return (i);
}
