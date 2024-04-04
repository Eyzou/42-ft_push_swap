/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:32:19 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/03 17:20:18 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_error(char *str)
{
	ft_printf("%s", str);
	exit(1);
}
void free_str(char **lst)
{
	char *str;
	int i;

	i = 0;
	if(!lst)
		return ;
	if(!*lst)
		return ;
	while(lst[i])
	{
		str = lst[i];
		i++;
		free(str);
	}
}