/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maggie <maggie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 19:52:15 by maggie            #+#    #+#             */
/*   Updated: 2023/06/09 22:41:34 by maggie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc == 0)
		return (0);
	if (!ft_check_digits(argc, argv) || ft_check_int_range(argc, argv))
		return (0);
}
