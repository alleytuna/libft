/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 15:36:39 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/14 11:30:30 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, unsigned int len)
{
	unsigned int	i;

	i = 0;
	if (dst > src)
	{
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	else if (dst < src)
	{
		ft_memmove(dst, src, len);
	}
	return ((void *)dst);
}
