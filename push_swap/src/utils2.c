/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:53:41 by anvannin          #+#    #+#             */
/*   Updated: 2023/02/24 20:36:45 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	list_smallest_pos(t_intl **list)
{
	t_intl	*tmp;
	int		n;
	int		pos;

	tmp = (*list);
	n = tmp->content;
	while (tmp->next)
	{
		if (tmp->content < n)
		{
			n = tmp->content;
			pos = node_index(list, tmp);
		}
		tmp = tmp->next;
	}
	return (pos);
}

int	list_last(t_intl **lst)
{
	t_intl	*tmp;

	tmp = (*lst);
	while (tmp->next)
		tmp = tmp->next;
	return (tmp->content);
}

// else if (argc >= 6)
// 		radix_sort(list_a, list_b);
void	algorithm_selector(int argc, t_intl **list_a, t_intl **list_b)
{
	if ((*list_a)->content < (*list_a)->next->content && argc == 2)
		return ;
	if (argc == 2)
		sa(list_a);
	else if (argc == 3)
		size_3_algorithm(list_a);
	else if (argc >= 4 && argc <= 5)
		size_5_algorithm(argc, list_a, list_b);
	else if (argc >= 6)
		size_any_algorithm(list_a, list_b);
}

int	is_list_ordered(t_intl **list)
{
	t_intl	*tmp;

	tmp = (*list);
	while (tmp->next != NULL)
	{
		if (tmp->content > tmp->next->content)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}

int	node_index(t_intl **list, t_intl *node)
{
	t_intl	*tmp;
	int		i;

	tmp = (*list);
	i = 0;
	while (tmp->next)
	{
		if (node == tmp)
			return (i);
		i++;
		tmp = tmp->next;
	}
	return (-1);
}