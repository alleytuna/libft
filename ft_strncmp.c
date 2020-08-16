/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/29 19:31:04 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/14 17:28:35 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] && s2[i] && ((i + 1) < len))
		i++;
	return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
}
