/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:11:11 by marvin            #+#    #+#             */
/*   Updated: 2024/04/05 18:11:11 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// rotate a and rotate b at the same time
void ft_rr(t_stack **a, t_stack **b, int print)
{
    t_stack *tmp;

    if(!*a || !((*a)->next || !*b || !(*b)->next))
        return ;
    tmp = *a;
    *a = ft_lst_last(*a);
    (*a)->next = tmp;
    *a = tmp->next;
    tmp->next = NULL;
    tmp =*b;
    *b = ft_lst_last(*b);
    (*b)->next = tmp;
    *b = tmp->next;
    tmp->next = NULL;
    if(print ==0)
        ft_printf("rr \n");
}