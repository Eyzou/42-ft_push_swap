/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_and_push.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 17:15:11 by marvin            #+#    #+#             */
/*   Updated: 2024/04/05 17:15:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//now that we have the number of rotations - its actually rotates in the sane direction / reverse same /reverse reverse / same reverse
int ft_apply_rarb(t_stack **a, t_stack **b, int nbr, char s)
{
    if (s =='a')
    {
        while((*a)->nbr != nbr && ft_find_place_b(*b,nbr) > 0)
            ft_rr(a,b,0);
    }
}