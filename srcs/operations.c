/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 09:02:42 by marvin            #+#    #+#             */
/*   Updated: 2024/04/08 17:51:34 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    ft_sa(t_stack **a, int print)
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
     if(print ==0)
        ft_printf("sa \n");
}

void    ft_sb(t_stack **b, int print)
{
    t_stack *tmp;

    if(*b == NULL)
        return ;
    if((*b)->next == NULL)
        return;
    tmp = *b;
    *b = (*b)->next;
    tmp->next = (*b)->next;
    (*b)->next = tmp;
     if(print ==0)
        ft_printf("sb \n");
}
void    ft_ss(t_stack **a,t_stack **b, int print)
{
    t_stack *tmp;

    if(*b == NULL || *a == NULL || (*b)->next == NULL || (*a)->next == NULL)
		return ;
	tmp = *a;
    *a = (*a)->next;
    tmp->next = (*a)->next;
    (*a)->next = tmp;
    tmp = *b;
    *b = (*b)->next;
    tmp->next = (*b)->next;
    (*b)->next = tmp;
     if(print ==0)
        ft_printf("ss \n");
}


void    ft_pa(t_stack **a, t_stack **b, int print)
{
    t_stack *tmp;

    if(*b == NULL)
        return ;
    tmp = *a;
    *a = *b;
    *b = (*b)->next;
    (*a)->next = tmp;
     if(print ==0)
        ft_printf("pa \n");
}

void    ft_pb(t_stack **a, t_stack **b, int print)
{
    t_stack *tmp;

    if(*a == NULL)
        return ;
    tmp = *b;
    *b = *a;
    *a = (*a)->next;
    (*a)->next = tmp;
     if(print ==0)
        ft_printf("pb \n");
}