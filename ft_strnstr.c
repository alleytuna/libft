/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 12:07:35 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/16 18:30:24 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <stdio.h>

char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 1;
	if (!little[0])
		return ((char *)big);
	while (big[i] != '\0' && i < len)
	{
		if (big[i] == little[0])
		{
			while (little[j] != '\0' && big[i + j] == little[j] &&
			(i + j) < len)
				++j;
			if (little[j] == '\0')
				return (&((char *)big)[i]);
		}
		++i;
	}
	return (NULL);
}
