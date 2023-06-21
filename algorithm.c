/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:56:55 by mvalerio          #+#    #+#             */
/*   Updated: 2023/06/21 19:26:16 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_lstlen(t_list *lst)
{
	int length;
	
	length = 0;
	if (!lst)
		return (length);
	while (lst)
	{
			length++;
			lst = lst->next;	
	}
	return (length);
}

int	ft_lstmin(t_list	*lst)
{
	int	minimum;

	minimum = *(int *)(lst->content);
	while (lst && lst->next)
	{
		if (*(int *)(lst->next->content) < minimum)
			minimum = *(int *)(lst->next->content);
		lst = lst->next;
	}
	return (minimum);
}

int	ft_median(int length, t_list *lst)
{
	int	median;
	int	reference;
	int	a;
	t_list	*keep_head;

	keep_head = lst;
	median = ft_lstmin(lst);
	a = 0;
	while (a++ < length/2)
	{
		while (*(int *)(lst->content) <= median)
			lst = lst->next;
		reference = *(int *)(lst->content);
		while (lst && lst->next)
		{
			if (*(int *)(lst->next->content) < reference && *(int *)(lst->next->content) > median)
				reference = *(int *)(lst->next->content);
			lst = lst->next;
		}
		median = reference;
		lst = keep_head;
	}
	return (median);
}

void	ft_first_sort(t_list **head_a, t_list **head_b)
{
	int	median;
	t_list **head_a_copy;

	head_a_copy = head_a;
	median = ft_median(ft_lstlen(*head_a), *head_a);
	while (*head_a)
	{
		ft_pb(head_a, head_b);
		if ((*head_a) && *(int *)((*head_a)->content) < median)
			ft_rb(head_b);
	}
	*head_a = *head_a_copy;
}