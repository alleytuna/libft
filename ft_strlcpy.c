/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:14:33 by aaltun            #+#    #+#             */
/*   Updated: 2020/07/29 18:47:09 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

unsigned int	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t			i;
	unsigned int	srclen;

	i = 0;
	srclen = 0;
	if (!dst || !src)
		return (0);
	while (src[srclen] != '\0')
		srclen++;
	if (!dstsize)
		return (srclen);
	while (src[i] != '\0' && (i < dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (srclen);
}
