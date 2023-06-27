/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 19:12:05 by mvalerio          #+#    #+#             */
/*   Updated: 2023/06/27 15:00:50 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	three_sort_a(t_list **head_a)
{
	t_list	*biggest;
	t_list	*smallest;

	biggest = ft_lsttiny_biggest(*head_a);
	smallest = ft_lsttiny_smallest(*head_a);

	if (*head_a == biggest)
		ft_ra(head_a);
	else if ((*head_a)->next == biggest)
		ft_rra(head_a);
	if (*head_a != smallest)
		ft_sa(head_a);
}