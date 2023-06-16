/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvalerio <mvalerio@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/16 11:31:49 by maggie            #+#    #+#             */
/*   Updated: 2023/06/16 19:06:16 by mvalerio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_switch(t_list *lst)
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
	return (1);
}

void	ft_rotate(t_list **head)
{
	t_list	*new_head;
	t_list	*last;

	new_head = (*head)->next;
	last = ft_lstlast(*head);
	last->next = *head;
	(*head)->next = NULL;
	*head = new_head;
}

void	ft_reverse_rotate(t_list **head)
{
	t_list	*last;
	t_list	*second_last;

	last = ft_lstlast(*head);
	second_last = ft_lst_secondlast(*head);
	second_last->next = NULL;
	last->next = *head;
	*head = last;
	ft_printf("reverse rotate\n");
	
}

t_list	*ft_lst_secondlast(t_list *lst)
{
	if (lst == NULL || lst->next == NULL)
		return (NULL);
	while (lst->next->next != NULL)
		lst = lst->next;
	return (lst);
}
