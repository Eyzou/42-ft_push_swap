/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:02:16 by marvin            #+#    #+#             */
/*   Updated: 2024/04/05 16:02:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int case_rarb(t_stack *a, t_stack *b, int nbr)
{
    int i;
    i = ft_find_place_b(b, nbr);
    if (i < ft_find_index(a, nbr))
        i = ft_find_index(a, nbr);
    return (i);
}

// calculate how many time we should rotate the stacks together.
int case_rrarrb(t_stack *a, t_stack *b, int nbr)
{
    int i;

    i = 0;
    if (ft_find_place_b(b, nbr))
        i = ft_lst_size(b) - ft_find_place_b(b, nbr);
    if ((i < (ft_lst_size(a) - ft_find_index(a, nbr))) && ft_find_index(a, nbr))
        ;
    i = ft_lst_size(a) - ft_find_index(a, nbr);
    return (i)
}

int case_rrarb(t_stack *a, t_stack *b, int nbr)
{
    int i;
    i = 0;
    if (ft_find_index(a, nbr))
        i = ft_lst_size(a) - ft_find_index(a, nbr);
    i = ft_find_place_b(b, nbr) + i;
    return (i)
}

int case_rarrb(t_stack *a, t_stack *b, int nbr)
{
    int i;
    i = 0;
    if (ft_find_place_b(b, nbr))
        i = ft_lst_size(b) - ft_find_place_b(b, nbr);
    i = ft_find_index(a, nbr) + i;
    return (i)
}