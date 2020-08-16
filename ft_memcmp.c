/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/26 12:38:11 by aaltun            #+#    #+#             */
/*   Updated: 2020/07/29 17:09:15 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int		ft_memcmp(const void *p1, const void *p2, unsigned int size)
{
	unsigned int	i;

	i = 0;
	if (size == 0)
		return (0);
	while (((unsigned char*)p1)[i] == ((unsigned char*)p2)[i] && i < size - 1)
		i++;
	return (((unsigned char*)p1)[i] - ((unsigned char*)p2)[i]);
}
