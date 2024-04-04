/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:10:46 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/04 16:42:22 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
	t_stack *a;

	if(argc < 2)
		ft_error("Error\nThere is not enough argument\n");
	check_errors(argv,1,0);
	a = process_arg(argc,argv);
	print_stack_a(a);
	if(!a || check_dup(a))
	{
		ft_error("Error\nThe arguments are invalid\n");
		free(a); /*free la liste entiere a changer avec la formule*/
	}
	if(!check_if_sorted(a))
		ft_printf("tu dois trier ta liste boloss \n");
	return(0);
}
