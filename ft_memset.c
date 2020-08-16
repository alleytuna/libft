/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/13 13:46:53 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/14 11:30:36 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memset(void *ptr, int value, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
	{
		((char *)ptr)[i] = value;
		i++;
	}
	return (ptr);
}
