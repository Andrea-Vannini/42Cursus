/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_r.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:04:39 by anvannin          #+#    #+#             */
/*   Updated: 2022/11/24 21:04:49 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list *list)
{
	t_list	*anchor;

	anchor = list;
	while (list)
		sa(list);
	list = anchor;
}

void	rra(t_list *list)
{
	void	*temp;
	void	*temp2;
	t_list	*last;
	t_list	*anchor;
	
	anchor = list;
	temp = list->content;
	last = ft_lstlast(list);
	list->content = last->content;
	list = list->next;
	temp2 = list->next->content;
	while (list)
	{
		list->content = temp2;
		temp = list->next->content;
		list = list->next;
	}
	list = anchor;
}
