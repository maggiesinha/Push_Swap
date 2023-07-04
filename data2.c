/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   data2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 17:24:00 by mvalerio          #+#    #+#             */
/*   Updated: 2023/07/04 17:24:53 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

 void	ft_total_cost(t_list *head_b, t_list *head_a)
{
	size_t	a_len;
	size_t	b_len;
	
	a_len = ft_lstlen(head_a);
	b_len = ft_lstlen(head_b);
	
	while	(head_b)
	{
		if ((head_b->position > b_len / 2 && head_b->tar->position > a_len / 2) || \
		(head_b->position < b_len / 2 && head_b->tar->position < a_len / 2) || \
		(a_len % 2 == 0 && head_b->tar->position == a_len / 2 + 1) || \
		(b_len % 2 == 0 && head_b->position == b_len / 2 + 1))
		{
			if (head_b->tar->cost > head_b->cost)
				head_b->total_cost = head_b->tar->cost;
			else
				head_b->total_cost = head_b->cost;
		}
		else
			head_b->total_cost = head_b->cost + head_b->tar->cost;
		head_b = head_b->next;
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