/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/24 16:55:09 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/14 16:29:26 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char			*dst;
	unsigned int	i;

	i = 0;
	if (!str)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(str))
		len = 0;
	if (!(dst = (char *)malloc(sizeof(*str) * (len + 1))))
		return (NULL);
	while (str[i + start] && i < len)
	{
		dst[i] = str[i + start];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
