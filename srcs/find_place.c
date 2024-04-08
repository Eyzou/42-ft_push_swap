/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_place.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 16:06:48 by marvin            #+#    #+#             */
/*   Updated: 2024/04/08 17:57:31 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_find_index(t_stack *a, int nbr)
{
    int i;

    i = 0;
    a->index = 0;
    while(a->nbr != nbr)
    {
        i++;
        a = a->next;
    }
    return (i);
}
//check the index number of the number once being pushed to stack a / to stack b for the other functions

int ft_find_place_a(t_stack *a, int nbr_push)
{
    int i;
    t_stack *tmp;

    i = 1;
    if(nbr_push > a->nbr && nbr_push < ft_lst_last(a)->nbr)
        i = 0;
    else if (nbr_push > ft_max(a) || nbr_push < ft_min(a))
        i = ft_find_index(a, ft_max(a));
    else
    {
        tmp = a->next;
        while(a->nbr < nbr_push || tmp->nbr > nbr_push)
        {
            a = a->next;
            tmp = a->next;
            i++;
        }       
    }
    return (i);
}


int ft_find_place_b(t_stack *b, int nbr_push)
{
    int i;
    t_stack *tmp;

    i = 1;
    if(nbr_push > b->nbr && nbr_push < ft_lst_last(b)->nbr)
        i = 0;
    else if (nbr_push > ft_max(b) || nbr_push < ft_min(b))
        i = ft_find_index(b, ft_max(b));
    else
    {
        tmp = b->next;
        while(b->nbr < nbr_push || tmp->nbr > nbr_push)
        {
            b = b->next;
            tmp = b->next;
            i++;
        }       
    }
    return (i);
}