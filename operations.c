/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maggie <maggie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 04:15:24 by maggie            #+#    #+#             */
/*   Updated: 2023/06/15 05:15:06 by maggie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sa(t_list *lst)
{
	int	*temp1;
	int	*temp2;
	
	temp1 = malloc(sizeof(int));
	if (!temp1)
		return (0);
	temp2 = malloc(sizeof(int));
	if (!temp2)
		return (0);
	*temp1 = *(int *)(lst->content);
	*temp2 = *(int *)(lst->next->content);
	free (lst->content);
	free ((lst->next)->content);
	lst->content = temp2;
	lst->next->content = temp1;
	ft_printf("sa\n");
	return (1);
}