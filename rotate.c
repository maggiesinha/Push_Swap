/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:33:29 by maggie            #+#    #+#             */
/*   Updated: 2023/06/16 14:50:14 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_list **head_a)
{
	ft_rotate(head_a);
	ft_printf("ra\n");
}

void	ft_rb(t_list **head_b)
{
	ft_rotate(head_b);
	ft_printf("rb\n");
}

void	ft_rr(t_list **head_a, t_list **head_b)
{
	ft_rotate(head_a);
	ft_rotate(head_b);
}