/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:24:00 by mvalerio          #+#    #+#             */
/*   Updated: 2023/06/28 16:20:49 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

 void	ft_total_cost(t_list *head_b, t_list *head_a)
{
	t_list	*temp_b;

	temp_b = head_b;
	while	(temp_b)
	{
		if (temp_b->position > ft_lstlen(head_b) / 2 && \
		temp_b->tar->position > ft_lstlen(head_a) / 2)
		{
			if (temp_b->tar->cost > temp_b->cost)
				temp_b->total_cost = temp_b->tar->cost;
			else
				temp_b->total_cost = temp_b->cost;
		}
		else if (temp_b->position < ft_lstlen(head_b) / 2 && \
		temp_b->tar->position < ft_lstlen(head_a) / 2)
		{
			if (temp_b->tar->cost > temp_b->cost)
				temp_b->total_cost = temp_b->tar->cost;
			else
				temp_b->total_cost = temp_b->cost;
		}
		else
			temp_b->total_cost = temp_b->cost + temp_b->tar->cost;
		temp_b = temp_b->next;
	}
}

void	ft_smallest_bigger(t_list *i_a, t_list *head_b)
{
	while (i_a)
	{
		if (*(int *)(i_a->content) < *(int *)(head_b->tar->content) && \
			*(int *)(i_a->content) > *(int *)(head_b->content))
			head_b->tar = i_a;
		i_a = i_a->next;
	}
}

void	ft_set_targets(t_list *head_a, t_list *head_b)
{
	t_list	*i_a;

	while (head_b)
	{
		i_a = head_a;
		head_b->tar = ft_lst_smallest(head_a);
		if (*(int *)(head_b->tar->content) > (*(int *)(head_b->content)))
		{
			head_b = head_b->next;
			continue ;
		}
		while (i_a)
		{
			if (*(int *)(i_a->content) < *(int *)(head_b->content))
				i_a = i_a->next;
			else
			{
				head_b->tar = i_a;
				i_a = i_a->next;
				ft_smallest_bigger(i_a, head_b);
				break ;
			}
		}
		head_b = head_b->next;
	}
}

void	ft_refresh_nodes(t_list *head_a, t_list *head_b)
{
	ft_position(head_a);
	ft_position(head_b);
	ft_individual_cost(head_a);
	ft_individual_cost(head_b);
	ft_set_targets(head_a, head_b);
	ft_total_cost(head_b, head_a);

}