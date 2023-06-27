/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:37:02 by mvalerio          #+#    #+#             */
/*   Updated: 2023/06/27 18:58:22 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lst_smallest(t_list *lst)
{
	t_list	*smallest;
	
	smallest = lst;
	while (lst && lst->next)
	{
		if (*(int *)(lst->next->content) < *(int *)(lst->content))
			smallest = lst->next;
		lst = lst->next;
	}
	return (smallest);
}