/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:52:15 by maggie            #+#    #+#             */
/*   Updated: 2023/06/16 19:22:42 by mvalerio         ###   ########.fr       */
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


	ft_printf("a: %d %d %d\n\n", *(int *)(head_a->content), *(int *)(head_a->next->content), *(int *)(head_a->next->next->content));
	ft_ra(&head_a);
	ft_printf("a: %d %d %d\n\n", *(int *)(head_a->content), *(int *)(head_a->next->content), *(int *)(head_a->next->next->content));
	ft_sa(head_a);
	ft_printf("a: %d %d %d\n\n", *(int *)(head_a->content), *(int *)(head_a->next->content), *(int *)(head_a->next->next->content));
	ft_pb(&head_a, &head_b);
	ft_pb(&head_a, &head_b);
	ft_pb(&head_a, &head_b);
	ft_printf("b: %d %d %d\n\n", *(int *)(head_b->content), *(int *)(head_b->next->content), *(int *)(head_b->next->next->content));
	ft_rb(&head_b);
	ft_printf("b: %d %d %d\n\n", *(int *)(head_b->content), *(int *)(head_b->next->content), *(int *)(head_b->next->next->content));
	ft_rrb(&head_b);
	ft_printf("b: %d %d %d\n\n", *(int *)(head_b->content), *(int *)(head_b->next->content), *(int *)(head_b->next->next->content));

	

}
