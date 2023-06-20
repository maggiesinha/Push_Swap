/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 15:56:55 by mvalerio          #+#    #+#             */
/*   Updated: 2023/06/20 17:17:09 by mvalerio         ###   ########.fr       */
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
	t_list	*head;

	*head = *lst;
	a = 0;
	median = ft_lstmin(lst);
	while (a++ < (length/2))
	{
		if (*(int *)(head->content) == median)
			reference == (*(int *)(head->next->content));
		else
			reference == (*(int *)(head->content));
		while (lst && lst->next)
		{
			if 
		}

	}
}
