/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printbytes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabaffo <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/03 11:51:24 by mabaffo           #+#    #+#             */
/*   Updated: 2023/01/03 11:53:35 by mabaffo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printbytes(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		ft_printbits(s[i]);
		i++;
	}
}
