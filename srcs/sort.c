/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:02:36 by marvin            #+#    #+#             */
/*   Updated: 2024/04/05 14:02:36 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void ft_sort_b_until_3 (t_stack **a, t_stack **b)
{
    int i;
    t_stack *tmp;

    while(ft_lst_size(*a) > 3 && !check_if_sorted(a))
    {
        tmp = *a;
        i = how_to_rotate_atob(*a,*b);
        while(i >= 0)
        {
            if(i == case_rarb(*a,*b,tmp->nbr))
                i = ft_apply_rarb(a,b,tmp->nbr, 'a');
        }
    }
}


t_stack *ft_sort_b(t_stack **a)
{
    t_stack *b;

    b = NULL;
    if(ft_lst_size(*a) > 3 && !check_if_sorted(*a))
        ft_pb(a,&b);
    if(ft_lst_size(*a) > 3 && !check_if_sorted(*a))
        ft_pb(a,&b);
    // if(ft_lst_size(*a) > 3 && !check_if_sorted(*a))
    //     ft_sort_b_until_3(a,&b);
    print_stack(b);
    return(b);
}

void ft_sort(t_stack **a)
{
    t_stack *b;
   // int     i;

     b = NULL;
    if(ft_lst_size(*a) == 2)
        ft_sa(a);
    else
    {
        ft_printf("il faut mieux trier la liste\n");
        b = ft_sort_b(a);
    }
}
