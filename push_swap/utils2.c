/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:53:41 by anvannin          #+#    #+#             */
/*   Updated: 2022/12/09 18:53:43 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_list_ordered(t_intl *list)
{
	t_intl	*anchor;

	anchor = list;
	while (list)
	{
		if (list->content > list->next->content)
			return (0);
	}
	list = anchor;
	return (1);
}

void	list_output(t_intl *list)
{
	t_intl	*anchor;

	anchor = list;
	while (anchor)
	{
		if (anchor->next)
			ft_printf("%d, ", anchor->content);
		else
			ft_printf("%d\n", anchor->content);
		anchor = anchor->next;
	}
}
