/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 14:54:01 by mvalerio          #+#    #+#             */
/*   Updated: 2023/06/16 19:21:16 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_list **head_a)
{
	ft_reverse_rotate(head_a);
	ft_printf("rra\n");
}

void	ft_rrb(t_list **head_b)
{
	ft_reverse_rotate(head_b);
	ft_printf("rrb\n");
}

void	ft_rrr(t_list **head_a, t_list **head_b)
{
	ft_reverse_rotate(head_a);
	ft_reverse_rotate(head_b);
	ft_printf("rrr\n");
}