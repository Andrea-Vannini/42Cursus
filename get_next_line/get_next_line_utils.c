/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anvannin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 17:36:52 by anvannin          #+#    #+#             */
/*   Updated: 2022/10/31 17:36:54 by anvannin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
    int     i;
    int     j;
    char    *str;

    i = -1;
    j = -1;
    if (!s1)
    {
        s1 = (char *)malloc(1 * sizeof(char));
        s1[0] = '\0';
    }
    str = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
    while (s1[++i] != '\0')
        str[i] = s1[i];
    while (s2[++j + i] != '\0')
        str[j + i] = s2[j];
    str[++j + i] = '\0';
    free(s1);
    return(str);
}

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	if (!s)
		return (0);
	if (c == '\0')
		return ((char *)&s[i]);
    while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(&s[i]));
        i++;
    }
	return (0);
}

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}