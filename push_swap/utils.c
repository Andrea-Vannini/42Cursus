/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 21:00:48 by anvannin          #+#    #+#             */
/*   Updated: 2022/11/24 21:00:50 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stackify(t_list *list, int argc, char *argv[])
{
	int	i;
	int	j;
	int	n;

	i = 1;
	j = 0;
	while (++i < argc)
	{
		n = ft_atoi(argv[i]);
		list->next = ft_lstnew(*((int **) &n));
		list = list->next;
	}
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
	if (!check_repetition(argc, argv))
		return (0);
	while (++i < argc)
	{
		j = -1;
		while (argv[i][++j] != '\0')
			if (!ft_isdigit(argv[i][j]))
				return (0);
	}
	return (1);
}

void	free_list(t_list *list)
{
	t_list	*tmp;

	tmp = list->next;
	while (tmp)
	{
		list->next = tmp->next;
		free(tmp);
		tmp = list->next;
	}
}

void	list_output(t_list *list)
{
	while (list)
	{
		if (list->next)
			ft_printf("%d, ", FIRST);
		else
			ft_printf("%d\n", FIRST);
		list = list->next;
	}
}
