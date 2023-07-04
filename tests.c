/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 18:53:52 by mvalerio          #+#    #+#             */
/*   Updated: 2023/07/04 20:07:09 by mvalerio         ###   ########.fr       */
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

void	ft_costs_and_positions(t_list *head_a, t_list *head_b)
{
	ft_printf("\nList A\n");
	while (head_a)
	{
		ft_printf("Node: %d\t\tPosition: %d\t\tCost: %d\t\tTotal cost: %d\n", *(int *)(head_a->content), head_a->position, head_a->cost, head_a->total_cost);
		head_a = head_a->next;
	}

	ft_printf("\nList B\n");
	while (head_b)
	{
		ft_printf("Node: %d\t\tPosition: %d\t\tCost: %d\t\tTotal cost: %d\t\tTarget: %d\t\tTarget position: %d\n", *(int *)(head_b->content), head_b->position, head_b->cost, head_b->total_cost, *(int *)head_b->tar->content, head_b->tar->position);
		head_b = head_b->next;
	}
}