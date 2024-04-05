/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:02:42 by marvin            #+#    #+#             */
/*   Updated: 2024/04/05 09:02:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    ft_sa(t_stack **a)
{
    t_stack *tmp;

    if(*a == NULL)
        return ;
    if((*a)->next == NULL)
        return;
    tmp = *a;
    *a = (*a)->next;
    tmp->next = (*a)->next;
    (*a)->next = tmp;
}

void    ft_pa(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    if(*b == NULL)
        return ;
    tmp = *a;
    *a = *b;
    *b = (*b)->next;
    (*a)->next = tmp;
}

void    ft_pb(t_stack **a, t_stack **b)
{
    t_stack *tmp;

    if(*a == NULL)
        return ;
    tmp = *b;
    *b = *a;
    *a = (*a)->next;
    (*a)->next = tmp;
}