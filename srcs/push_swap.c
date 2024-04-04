/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 14:10:46 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/04 11:29:00 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int main(int argc, char **argv)
{
	t_stack *a;

	if(argc < 2)
		ft_error("Error arg count\n");
	a = process_arg(argc,argv);
	if(!a || check_dup(a) == 1)
	{
		ft_error("Error apres le a et check dup\n");
		free(a);
	}
	//if(!ft_sorted(a))
}
/*

verifier les args
parser les chiffre les mettres dans une liste avec ft_split - parser les chiffre separe par les espaces.

*/