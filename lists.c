/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lists.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maggie <maggie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 22:43:22 by maggie            #+#    #+#             */
/*   Updated: 2023/06/12 17:42:15 by maggie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_args_into_stack(int argc, char *argv[])
{
	size_t	i;
	
	i = 0;
	stack head_a;
	while (++i < argc)
		ft_lstadd_back(&head_a ,ft_lstnew(*(ft_atoi(argv[i]))));
}