/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 16:10:07 by aaltun            #+#    #+#             */
/*   Updated: 2020/07/26 14:45:38 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memchr(const void *memblock, int search, unsigned int len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		if (((char *)memblock)[i] == (char)search)
			return ((void *)(memblock + i));
		i++;
	}
	return (NULL);
}
