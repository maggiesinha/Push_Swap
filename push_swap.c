/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maggie <maggie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:52:15 by maggie            #+#    #+#             */
/*   Updated: 2023/06/15 04:42:06 by maggie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_list	*head_a;

	head_a = 0;
	if (argc <= 1 || !ft_check_digits(argc, argv) || \
		!ft_check_int_range(argc, argv))
		return (0);
	ft_args_into_stack(argc, argv, &head_a);
	if (!ft_check_duplicates(head_a))
		return (0);
	ft_printf("%d\n", *(int *)(head_a->content));
	ft_printf("%d\n", *(int *)((head_a->next)->content));
	ft_printf("%d\n\n", *(int *)(((head_a->next)->next)->content));

	ft_sa(head_a);
	ft_printf("%d\n", *(int *)(head_a->content));
	ft_printf("%d\n", *(int *)((head_a->next)->content));
	ft_printf("%d\n\n", *(int *)((head_a->next)->next)->content);
}
