/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 19:10:02 by anvannin          #+#    #+#             */
/*   Updated: 2022/10/11 19:45:14 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	*arr;
	int		i;

	i = 0;
	arr = (size_t *)malloc(sizeof(size));
	while (i < size)
	{
		arr[i] = '\0';
		i++;
	}
}
