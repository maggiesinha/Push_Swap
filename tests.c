/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:53:52 by mvalerio          #+#    #+#             */
/*   Updated: 2023/06/21 19:00:08 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_print_lists(t_list *head_a, t_list *head_b)
{
	ft_printf("\nStack a:\n\n");
	while (head_a)
	{
		ft_printf("%d\n", *(int *)(head_a->content));
		head_a = head_a->next;
	}
	ft_printf("\nStack b:\n\n");
	while (head_b)
	{
		ft_printf("%d\n", *(int *)(head_b->content));
		head_b = head_b->next;
	}
}