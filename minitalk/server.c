/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <anvannin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 20:11:57 by anvannin          #+#    #+#             */
/*   Updated: 2023/01/23 20:51:05 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	sig_handler(int signum)
{
	static int	i;
	static char	c;
	
	i = 9;
	c = 0;
	if (--i && sig == SIGUSR1)
		c |= 1 << i;
	if (i <= 0)
	{
		ft_printf("%c", c);
		i = 8;
		c = 0;
	}
}

int	main(void)
{
	int	pid;

	pid = getpid();
	ft_printf("pid: %d\n", pid);
	while (1)
	{
		signal(SIGUSR1, sig_handler);
		signal(SIGUSR2, sig_handler);
	}
	return (0);
}
