/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/26 15:08:24 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/16 15:55:08 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"
#include <stdio.h>

static int		ft_is_set(char const *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static int		ft_start(char const *str, char const *set)
{
	int	i;

	i = 0;
	while (ft_is_set(set, str[i]))
		i++;
	return (i);
}

static int		ft_end(char const *str, char const *set)
{
	int	len;

	len = ft_strlen(str);
	while (ft_is_set(set, str[len - 1]) == 1)
		len--;
	return (len);
}

char			*ft_strtrim(char const *str, char const *set)
{
	char			*dst;
	unsigned int	start;
	unsigned int	end;
	unsigned int	dst_count;

	if (!str || !set)
		return (NULL);
	start = ft_start(str, set);
	end = ft_end(str, set);
	if (start > end)
		start = 0;
	if (!(dst = malloc(sizeof(*dst) * (end - start + 1))))
		return (NULL);
	dst_count = 0;
	while ((start + dst_count) < end)
	{
		dst[dst_count] = str[start + dst_count];
		dst_count++;
	}
	dst[dst_count] = '\0';
	return (dst);
}
