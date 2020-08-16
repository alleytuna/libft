/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 15:30:44 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/16 15:55:50 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include "libft.h"

char	*ft_strmapi(char const *str, char (*f)(unsigned int, char))
{
	char	*dst;
	int		len;
	int		i;

	if (!str || !f)
		return (NULL);
	len = ft_strlen(str);
	i = 0;
	if (!(dst = (char *)malloc(sizeof(*str) * len + 1)))
		return (NULL);
	while (str[i] != '\0')
	{
		dst[i] = f(i, str[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
