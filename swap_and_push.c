/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_and_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maggie <maggie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 04:15:24 by maggie            #+#    #+#             */
/*   Updated: 2023/06/16 11:35:59 by maggie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sa(t_list *head_a)
{
	if (head_a && head_a->next)
	{
		if(!ft_switch(head_a))
			return (0);
		ft_printf("sa\n");
	}
	return (1);
}

int	ft_sb(t_list *head_b)
{
	if (head_b && head_b->next)
	{
		if(!ft_switch(head_b))
			return (0);
		ft_printf("sb\n");
	}
	return (1);
}

int	ft_ss(t_list *head_a, t_list *head_b)
{
	if (head_a && head_a->next)
	{
		if(!ft_switch(head_a))
			return (0);
	}
	if (head_b && head_b->next)
	{
		if(!ft_switch(head_b))
			return (0);
	}
	ft_printf("ss\n");
	return (1);
}

int	ft_pa(t_list **head_a, t_list **head_b)
{
	t_list	*temp;
	if (*head_b)
	{
		if (!(temp = ft_lstnew((void *)((*head_b)->content))))
			return (0);
		ft_lstadd_front(head_a, temp);
		*head_b = (*head_b)->next;
		ft_printf("pa\n");
	}
	return (1);
}

int	ft_pb(t_list **head_a, t_list **head_b)
{
	t_list	*temp;
	
	if (*head_a)
	{
		if (!(temp = ft_lstnew((void *)((*head_a)->content))))
			return (0);
		ft_lstadd_front(head_b, temp);
		*head_a = (*head_a)->next;
		ft_printf("pb\n");
	}
	return (1);
}