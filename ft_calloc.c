/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/21 17:50:44 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/16 16:14:00 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

void	*ft_calloc(size_t nbelements, size_t len)
{
	char	*dst;
	size_t	memblock;

	memblock = nbelements * len;
	if (!(dst = (char *)malloc(memblock)))
		return (NULL);
	ft_bzero(dst, memblock);
	return (dst);
}
