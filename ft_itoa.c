/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 11:17:52 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/14 11:29:55 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int		ft_len(int value)
{
	unsigned int	len;

	len = 0;
	if (value == 0)
		return (1);
	if (value < 0)
		len++;
	while (value)
	{
		len++;
		value = value / 10;
	}
	return (len);
}

char	*ft_itoa(int value)
{
	char			*dst;
	unsigned int	len;
	unsigned int	copy;

	len = ft_len(value);
	copy = value;
	if (!(dst = (char*)malloc(sizeof(*dst) * (len + 1))))
		return (NULL);
	if (value == 0)
		dst[0] = '0';
	dst[len] = '\0';
	if (value < 0)
	{
		dst[0] = '-';
		copy = -value;
	}
	while (copy)
	{
		dst[--len] = copy % 10 + '0';
		copy = copy / 10;
	}
	return (dst);
}
