/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:26:35 by maggie            #+#    #+#             */
/*   Updated: 2023/06/16 14:50:27 by mvalerio         ###   ########.fr       */
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

#endif