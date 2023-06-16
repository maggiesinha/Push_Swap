/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maggie <maggie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:26:35 by maggie            #+#    #+#             */
/*   Updated: 2023/06/16 11:20:05 by maggie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "Libft/libft.h"

int		ft_check_digits(int argc, char *argv[]);
int		ft_check_int_range(int argc, char *argv[]);
int		ft_check_int_max(char *str);
int		ft_check_int_min(char *str);
void	ft_args_into_stack(int argc, char *argv[], t_list **head_a);
int		ft_check_duplicates(t_list *lst);
int		ft_sa(t_list *head_a);
int		ft_sb(t_list *head_b);
int		ft_ss(t_list *head_a, t_list *head_b);
int		ft_pa(t_list **head_a, t_list **head_b);
int		ft_pb(t_list **head_a, t_list **head_b);


#endif