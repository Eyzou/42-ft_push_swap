/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehamm <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/03 15:11:58 by ehamm             #+#    #+#             */
/*   Updated: 2024/04/08 18:04:08 by ehamm            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

/*# define IS_TOP
#ifdef */

#include "../libft/libft.h"
#include <unistd.h> //write
#include <stdlib.h> //malloc

typedef struct s_stack
{
	long nbr;
	long index;
	struct s_stack *next;
	struct s_stack *prev;
	struct s_stack *bottom;
} t_stack;

// check arguments
int check_dup(t_stack *a);
int check_if_sorted(t_stack *a);
void check_errors(char **argv, int i, int j);
void print_stack(t_stack *stack);

// process arguments
t_stack *arg_string_to_integer(char **argv);
t_stack *process_arg(int argc, char **argv);

// utils
t_stack *store_int_to_list(int content);
t_stack *ft_lst_last(t_stack *lst);
void add_last_node(t_stack **stack, t_stack *stack_new);
int ft_lst_size(t_stack *lst);
int ft_max(t_stack *a);
int ft_min(t_stack *a);
int ft_find_index(t_stack *a, int nbr);
int ft_find_place_a(t_stack *a, int nbr_push);
int ft_find_place_b(t_stack *b, int nbr_push);

// operations
void 	ft_sa(t_stack **a, int print);
void	ft_sb(t_stack **b, int print);
void ft_ss(t_stack **a,t_stack **b, int print);
void ft_pa(t_stack **a, t_stack **b, int print);
void ft_pb(t_stack **a, t_stack **b, int print);

void ft_rr(t_stack **a, t_stack **b, int print);
void ft_rb(t_stack **b, int print);
void ft_ra(t_stack **a, int print);

void	ft_rra(t_stack **a, int print);
void	ft_rrb(t_stack **b, int print);
void ft_rrr(t_stack **a, t_stack **b, int print);


int case_rarb(t_stack *a, t_stack *b, int nbr);
int case_rrarrb(t_stack *a, t_stack *b, int nbr);
int case_rrarb(t_stack *a, t_stack *b, int nbr);
int case_rarrb(t_stack *a, t_stack *b, int nbr);

int case_rarb_a(t_stack *a, t_stack *b, int nbr);
int case_rrarrb_a(t_stack *a, t_stack *b, int nbr);
int case_rarrb_a(t_stack *a, t_stack *b, int nbr);
int case_rrarb_a(t_stack *a, t_stack *b, int nbr);

// sort
void ft_sort(t_stack **a);
t_stack	**ft_sort_a(t_stack **a, t_stack **b);
t_stack *ft_sort_b(t_stack **a);
int how_to_rotate_btoa(t_stack *a, t_stack *b);
int how_to_rotate_atob(t_stack *a, t_stack *b);
int ft_apply_rarb(t_stack **a, t_stack **b, int nbr, char s);
int	ft_apply_rrarrb(t_stack **a, t_stack **b, int nbr, char s);
int	ft_apply_rrarb(t_stack **a, t_stack **b, int nbr, char s);
int	ft_apply_rarrb(t_stack **a, t_stack **b, int nbr, char s);

// error message and free
void ft_error(char *str);
void free_str(char **lst);
void free_stack(t_stack **stack);

#endif