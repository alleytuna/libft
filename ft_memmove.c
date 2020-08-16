/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 19:07:56 by aaltun            #+#    #+#             */
/*   Updated: 2020/07/29 15:46:31 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memmove(void *dst, const void *src, unsigned int len)
{
	unsigned int	i;

	if (src < dst)
	{
		i = len;
		while (i > 0)
		{
			i--;
			((char*)dst)[i] = ((char *)src)[i];
		}
	}
	else if (src > dst)
	{
		i = 0;
		while (i < len)
		{
			((char*)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return ((void *)dst);
}
