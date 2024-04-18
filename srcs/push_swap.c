/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 17:18:55 by elo               #+#    #+#             */
/*   Updated: 2024/04/18 11:39:59 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = ft_process(argc, argv);
	if (!a || ft_checkdup(a) || check_error(argv, 1, 0) || alpha_check(argv))
	{
		ft_free(&a);
		ft_error("Error\nSome arguments are invalids.\n");
	}
	if (!ft_checksorted(a))
		ft_sort(&a);
	ft_free(&a);
	return (0);
}
