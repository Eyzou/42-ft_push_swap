/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:11:58 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/18 11:40:36 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../libft/libft.h"
# include <stdlib.h>
# include <unistd.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648

typedef struct s_stack
{
	long			nbr;
	long			index;
	struct s_stack	*next;
	struct s_stack	*prev;
	struct s_stack	*bottom;
}					t_stack;

void				ft_add_back(t_stack **stack, t_stack *stack_new);
t_stack				*ft_stack_new(int content);
int					alpha_check(char **argv);
int					check_error(char **argv, int i, int j);
int					ft_checkdup(t_stack *a);
int					sign(int c);
int					digit(int c);
int					space(int c);
void				ft_error(char *str);
void				ft_free(t_stack **lst);
t_stack				*ft_lst_last(t_stack *lst);
long long			ft_atoi2(const char *str);

void				ft_ra(t_stack **a, int j);
void				ft_rb(t_stack **b, int j);
void				ft_sa(t_stack **a, int j);
void				ft_pa(t_stack **a, t_stack **b, int j);
void				ft_pb(t_stack **stack_a, t_stack **stack_b, int j);
void				ft_rra(t_stack **a, int j);
void				ft_ss(t_stack **a, t_stack **b, int j);
void				ft_rr(t_stack **a, t_stack **b, int j);
void				ft_rrr_sub(t_stack **b, int j);
void				ft_rrr(t_stack **a, t_stack **b, int j);

int					ft_lst_size(t_stack *lst);
int					ft_min(t_stack *a);
int					ft_max(t_stack *a);
int					ft_find_index(t_stack *a, int nbr);
int					ft_find_place_b(t_stack *stack_b, int nbr_push);
int					ft_find_place_a(t_stack *a, int nbr);
void				ft_sort(t_stack **stack_a);
int					ft_checksorted(t_stack *stack_a);
void				ft_sort_big(t_stack **stack_a);
void				ft_sort_three(t_stack **stack_a);

void				ft_freestr(char **lst);
int					ft_case_rarb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rrarrb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rarrb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rrarb_a(t_stack *a, t_stack *b, int c);
int					ft_case_rarb(t_stack *a, t_stack *b, int c);
int					ft_case_rrarrb(t_stack *a, t_stack *b, int c);
int					ft_case_rrarb(t_stack *a, t_stack *b, int c);
int					ft_case_rarrb(t_stack *a, t_stack *b, int c);
int					ft_rotate_type_ab(t_stack *a, t_stack *b);
int					ft_rotate_type_ba(t_stack *a, t_stack *b);
int					ft_apply_rarb(t_stack **a, t_stack **b, int c, char s);
int					ft_apply_rrarrb(t_stack **a, t_stack **b, int c, char s);
int					ft_apply_rrarb(t_stack **a, t_stack **b, int c, char s);
int					ft_apply_rarrb(t_stack **a, t_stack **b, int c, char s);
void				ft_rrb(t_stack **b, int j);

t_stack				*ft_process(int argc, char **argv);
void				ft_sb(t_stack **b, int j);
void				ft_sort_b_till_3(t_stack **stack_a, t_stack **stack_b);
t_stack				*ft_sub_process(char **argv);

#endif
