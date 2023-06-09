/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   protections.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maggie <maggie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:43:20 by maggie            #+#    #+#             */
/*   Updated: 2023/06/09 17:17:43 by maggie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_digits(int argc, char *argv[])
{
	int	i; // argv[i][a]
	size_t	a; // argv[i][a]
	
	i = 0;
	while (++i < argc) // iterates through the arrays
	{
		a = 0;
		while (argv[i][a]) // iterates inside each array
		{
			if (argv[i][a] == '-')
				a++;
			if (argv[i][a] < '0' || argv[i][a] > '9')
			{
				ft_printf("Error\n");
				return 0;
			}
			a++;	
		}
	}
		return (1);
}

int	check_int_max(int argc, char *argv[])
{
	int	i; // argv[i][a]
	size_t	a; // argv[i][a]
	
	i = 0;
	while (++i < argc) // iterates through the arrays
	{
		a = 0;
		while (argv[i][a] && argv[i][a] == '0') // iterates inside each array
			a++;
		while (argv[i][a])
		{
			if (ft_strlen(&(argv[i][a])) > 10)
				return 0;
			else if (ft_strlen(&(argv[i][a])) < 10)
				return 1;
			else if (argv[i][a] > 2)
				return 0;
			else if (argv[i][a++] < 2)
				return 1;
			else if (argv[i][a] > 1)
				return 0;
			else if (argv[i][a++] < 1)
				return 1;
			else if (argv[i][a] > 4)
				return 0;
			else if (argv[i][a++] < 4)
				return 1;
			else if (argv[i][a] > 7)
				return 0;
			else if (argv[i][a++] < 7)
				return 1;
			else if (argv[i][a] > 4)
				return 0;
			else if (argv[i][a++] < 4)
				return 1;
			else if (argv[i][a] > 8)
				return 0;
			else if (argv[i][a++] < 8)
				return 1;
			else if (argv[i][a] > 3)
				return 0;
			else if (argv[i][a++] < 3)
				return 1;
			else if (argv[i][a] > 6)
				return 0;
			else if (argv[i][a++] < 6)
				return 1;
			else if (argv[i][a] > 4)
				return 0;
			else if (argv[i][a++] < 4)
				return 1;
			else if (argv[i][a] > 7)
				return 0;
			else if (argv[i][a++] < 7)
				return 1;
		}
	}
		return (1);
}