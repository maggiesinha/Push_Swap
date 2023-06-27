/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:12:05 by mvalerio          #+#    #+#             */
/*   Updated: 2023/06/27 20:00:08 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	ft_sort_small(t_list **head_a)
{
	if (ft_lstlen(*head_a) == 2)
	{
		if (*(int *)((*head_a)->content) > *(int *)((*head_a)->next->content))
			ft_ra(head_a);
	}
	else if (ft_lstlen(*head_a) == 3)
		three_sort_a(head_a);
}

void	three_sort_a(t_list **head_a)
{
	t_list	*biggest;
	t_list	*smallest;

	biggest = ft_lst_biggest(*head_a);
	smallest = ft_lst_smallest(*head_a);

	if (*head_a == biggest)
		ft_ra(head_a);
	else if ((*head_a)->next == biggest)
		ft_rra(head_a);
	if (*head_a != smallest)
		ft_sa(head_a);
}