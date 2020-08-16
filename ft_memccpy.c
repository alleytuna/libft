/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/24 15:15:30 by aaltun            #+#    #+#             */
/*   Updated: 2020/07/31 09:40:10 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memccpy(void *dst, const void *src, int c, unsigned int len)
{
	unsigned int	i;
	unsigned char	negative;

	i = 0;
	if (c < 0)
		c = c + 256;
	negative = c;
	while (i < len)
	{
		((char *)dst)[i] = ((char *)src)[i];
		if (((unsigned char *)src)[i] == negative)
		{
			return (dst + i + 1);
		}
		i++;
	}
	return (NULL);
}
