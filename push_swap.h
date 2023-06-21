/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:26:35 by maggie            #+#    #+#             */
/*   Updated: 2023/06/21 18:57:17 by mvalerio         ###   ########.fr       */
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

// Operations Utils
int		ft_switch(t_list *lst);
void	ft_rotate(t_list **head);
t_list	*ft_lst_secondlast(t_list *lst);
void	ft_reverse_rotate(t_list **head);


// Operations
//		Swap and Push
int		ft_sa(t_list *head_a);
int		ft_sb(t_list *head_b);
int		ft_ss(t_list *head_a, t_list *head_b);
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

// Algorithm
int		ft_lstlen(t_list *lst);
int		ft_lstmin(t_list *lst);
int		ft_median(int length, t_list *lst);
void	ft_first_sort(t_list **head_a, t_list **head_b);

// Tests
void	ft_print_lists(t_list *head_a, t_list *head_b);

#endif