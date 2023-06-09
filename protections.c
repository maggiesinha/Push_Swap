/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   protections.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maggie <maggie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:43:20 by maggie            #+#    #+#             */
/*   Updated: 2023/06/09 22:39:53 by maggie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_digits(int argc, char *argv[])
{
	int		i;
	size_t	a;

	i = 0;
	while (++i < argc)
	{
		a = 0;
		while (argv[i][a])
		{
			if (argv[i][a] == '-')
				a++;
			if (argv[i][a] < '0' || argv[i][a] > '9' || !(argv[i][a]))
			{
				ft_printf("Error\n");
				return (0);
			}
			a++;
		}
	}
	return (1);
}

int	ft_check_int_range(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		if (argv[i][0] == '-')
		{
			if (!ft_check_int_min(argv[i]))
			{
				ft_printf("Error");
				return (0);
			}
		}
		else if (!ft_check_int_max(argv[i]))
		{
			ft_printf("Error");
			return (0);
		}
	}
	return (1);
}

int	ft_check_int_max(char *str)
{
	size_t	a;

	a = 0;
	while (str[a] && str[a] == '0')
		a++;
	if (str[a])
	{
		if (ft_strlen(&(str[a])) > 10)
			return (0);
		else if (ft_strlen(&(str[a])) == 10 && \
				ft_strncmp(&(str[a]), "2147483647", 10) > 0)
			return (0);
	}
	return (1);
}

int	ft_check_int_min(char *str)
{
	size_t	a;

	a = 1;
	while (str[a] && str[a] == '0')
		a++;
	if (str[a])
	{
		if (ft_strlen(&(str[a])) > 10)
			return (0);
		else if (ft_strlen(&(str[a])) == 10 && \
			ft_strncmp(&(str[a]), "2147483648", 10) > 0)
			return (0);
	}
	return (1);
}
