/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 15:57:18 by marvin            #+#    #+#             */
/*   Updated: 2024/04/05 15:57:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int how_to_rotate_atob(t_stack *a, t_stack *b)
{
}

int how_to_rotate_btoa(t_stack *a, t_stack *b)
{
    int i;
    t_stack *tmp;

    tmp = a;
    i = case_rrarrb_a(a, b, b->nbr);
    while (tmp)
    {
        if (i > case_rarb_a(a, b, tmp->nbr))
            i = case_rarb_a(a, b, tmp->nbr);
         if (i > case_rrarrb_a(a, b, tmp->nbr))
            i = case_rrarrb_a(a, b, tmp->nbr);
         if (i > case_rarrb_a(a, b, tmp->nbr))
            i = case_rarrb_a(a, b, tmp->nbr);
         if (i > case_rrarb_a(a, b, tmp->nbr))
            i = case_rrarb_a(a, b, tmp->nbr);
        tmp = tmp->next;
    }
    return (i);
}
