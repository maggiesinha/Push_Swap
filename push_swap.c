/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maggie <maggie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:52:15 by maggie            #+#    #+#             */
/*   Updated: 2023/06/16 11:26:03 by maggie           ###   ########.fr       */
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
	
}
