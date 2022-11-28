/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_s.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:04:57 by anvannin          #+#    #+#             */
/*   Updated: 2022/11/24 21:05:12 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list *list)
{
	void	*temp;
	
	if (list && list->next)
	{
		temp = list->content;
		list->content = list->next->content;
		list->next->content = temp;
	}
}
