/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver2.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:01:59 by marvin            #+#    #+#             */
/*   Updated: 2024/04/05 17:01:59 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int case_rarb_a(t_stack *a, t_stack *b, int nbr)
{
    int i;
    i = ft_find_place_a(a, nbr);
    if (i < ft_find_index(b, nbr))
        i = ft_find_index(b, nbr);
    return (i);
}

int case_rrarrb_a(t_stack *a, t_stack *b, int nbr)
{
    int i;

    i = 0;
    if (ft_find_place_a(a, nbr))
        i = ft_lst_size(a) - ft_find_place_a(a, nbr);
    if ((i < (ft_lst_size(b) - ft_find_index(b, nbr))) && ft_find_index(b, nbr))
        ;
    i = ft_lst_size(b) - ft_find_index(b, nbr);
    return (i)
}

int case_rarrb_a(t_stack *a, t_stack *b, int nbr)
{
    int i;
    i = 0;
    if (ft_find_index(b, nbr))
        i = ft_lst_size(b) - ft_find_index(b, nbr);
    i = ft_find_place_a(a, nbr) + i;
    return (i)
}

int case_rrarb_a(t_stack *a, t_stack *b, int nbr)
{
    int i;
    i = 0;
    if (ft_find_place_a(a, nbr))
        i = ft_lst_size(a) - ft_find_place(a, nbr);
    i = ft_find_index(b, nbr) + i;
    return (i)
}