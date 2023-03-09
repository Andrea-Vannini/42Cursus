/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:00:48 by anvannin          #+#    #+#             */
/*   Updated: 2023/02/24 19:57:20 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_print(t_intl **list)
{
	t_intl	*tmp;

	tmp = (*list);
	while (tmp)
	{
		if (tmp->next)
			ft_printf("%d, ", tmp->content);
		else
			ft_printf("%d\n", tmp->content);
		tmp = tmp->next;
	}
}

t_intl	*ft_push(int content)
{
	t_intl	*new;

	new = (t_intl *)malloc(sizeof(t_intl));
	new->content = content;
	new->next = NULL;
	return (new);
	free(new);
}

int	stackify(t_intl **list, int argc, char *argv[])
{
	int		i;
	t_intl	*node;

	node = (t_intl *) malloc(sizeof(t_intl));
	if (!node)
		return (0);
	node->content = ft_atol(argv[1]);
	node->next = NULL;
	(*list) = node;
	if (!list)
		return (0);
	i = 1;
	while (++i < argc)
	{
		if (ft_atol(argv[i]) < INT_MIN || ft_atol(argv[i]) > INT_MAX)
			return (0);
		(*list)->next = ft_push(ft_atoi(argv[i]));
		(*list) = (*list)->next;
	}
	(*list) = node;
	return (1);
}

int	check_repetition(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	while (++i < argc)
	{
		j = i;
		while (++j < argc)
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
	}
	return (1);
}

int	argv_check(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	if (!check_repetition(argc, argv) || argc == 1)
		return (0);
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
			if (!(ft_isdigit(argv[i][j]) || argv[i][j] == '+'
				|| argv[i][j] == '-'))
				return (0);
	}
	return (1);
}