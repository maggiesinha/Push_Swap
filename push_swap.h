/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maggie <maggie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 20:26:35 by maggie            #+#    #+#             */
/*   Updated: 2023/06/09 22:40:33 by maggie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include "Libft/libft.h"

typedef struct a
{
	int	num;
}	t_a;

typedef struct b
{
	int	num;
}	t_b;

int	ft_check_digits(int argc, char *argv[]);
int	ft_check_int_range(int argc, char *argv[]);
int	ft_check_int_max(char *str);
int	ft_check_int_min(char *str);

#endif