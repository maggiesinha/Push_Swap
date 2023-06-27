/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:37:02 by mvalerio          #+#    #+#             */
/*   Updated: 2023/06/27 14:39:08 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ft_lsttiny_smallest(t_list *lst)
{
	if (*(int *)(lst->content) < *(int *)(lst->next->content))
	{
		if (*(int *)(lst->content) < *(int *)(lst->next->next->content))
			return (lst);
		else
			return (lst->next->next);
	}
	if (*(int *)(lst->next->content) < *(int *)(lst->next->next->content))
		return (lst->next);
	else
		return (lst->next->next);
}