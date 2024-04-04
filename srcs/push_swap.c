/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:10:46 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/04 14:19:08 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
	t_stack *a;

	if(argc < 2)
		ft_error("Error\nThere is not enough argument\n");
	a = process_arg(argc,argv);
	if(!a || check_dup(a) == 1)
	{
		ft_error("Error\nThe arguments are invalid");
		free(a);
	}
	//if(!ft_sorted(a))
}
/*

verifier les args
parser les chiffre les mettres dans une liste avec ft_split - parser les chiffre separe par les espaces.

*/