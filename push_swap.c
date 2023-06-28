/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:52:15 by maggie            #+#    #+#             */
/*   Updated: 2023/06/28 16:22:45 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*head_a;
	t_list	*head_b;

	head_a = 0;
	head_b = 0;
	if (argc <= 1 || !ft_check_digits(argc, argv) || \
		!ft_check_int_range(argc, argv))
		return (0);
	ft_args_into_stack(argc, argv, &head_a);
	if (!ft_check_duplicates(head_a))
		return (0);
	if (ft_lstlen(head_a) <= 3)
	{
		ft_sort_small(&head_a);
		return (0);
	}

	while (ft_lstlen(head_a) > 3)
		ft_pb(&head_a, &head_b);
	ft_refresh_nodes(head_a, head_b);

	while (head_b)
	{
		printf("The total cost of node number %zu is %zu\n", head_b->position, head_b->total_cost);
		head_b = head_b->next;
	}
	
}
