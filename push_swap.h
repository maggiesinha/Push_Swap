/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:26:35 by maggie            #+#    #+#             */
/*   Updated: 2023/07/04 17:18:43 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "Libft/libft.h"

// Protections
int		ft_check_digits(int argc, char *argv[]);
int		ft_check_int_range(int argc, char *argv[]);
int		ft_check_int_max(char *str);
int		ft_check_int_min(char *str);
int		ft_check_duplicates(t_list *lst);

// Lists
void	ft_args_into_stack(int argc, char *argv[], t_list **head_a);

// Utils
//		utils 1
int		ft_switch(t_list **lst);
void	ft_rotate(t_list **head);
t_list	*ft_lst_secondlast(t_list *lst);
void	ft_reverse_rotate(t_list **head);
t_list	*ft_lst_biggest(t_list *lst);

//		Utils 2
t_list	*ft_lst_smallest(t_list *lst);

// Operations
//		Swap and Push
int		ft_sa(t_list **head_a);
int		ft_sb(t_list **head_b);
int		ft_ss(t_list **head_a, t_list **head_b);
int		ft_pa(t_list **head_a, t_list **head_b);
int		ft_pb(t_list **head_a, t_list **head_b);

//		Rotate
void	ft_ra(t_list **head_a);
void	ft_rb(t_list **head_b);
void	ft_rr(t_list **head_a, t_list **head_b);

//		Reverse Rotate
void	ft_rra(t_list **head_a);
void	ft_rrb(t_list **head_b);
void	ft_rrr(t_list **head_a, t_list **head_b);

// Data
//		Data 1
size_t	ft_lstlen(t_list *lst);
int		ft_lstmin(t_list *lst);
int		ft_lstmedian(int length, t_list *lst);
void	ft_position(t_list *lst);
void	ft_individual_cost(t_list	*lst);

//		Data 2
void	ft_total_cost(t_list *head_b, t_list *head_a);
void	ft_smallest_bigger(t_list *i_a, t_list *head_b);
void	ft_set_targets(t_list *head_a, t_list *head_b);
void	ft_refresh_nodes(t_list *head_a, t_list *head_b);

// Algorithm
void	three_sort_a(t_list **lst);
void	ft_sort_small(t_list **head_a);

// Tests
void	ft_print_lists(t_list *head_a, t_list *head_b);
void	ft_costs_and_positions(t_list *head_a, t_list *head_b);

#endif