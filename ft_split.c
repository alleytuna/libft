/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:00:28 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/18 22:12:28 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <unistd.h>
#include <stdio.h>

int		ft_count_words(char const *str, char c)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] != c)
		{
			i++;
			if (str[i] == c && str[i] != '\0')
				count++;
			if (str[i] == '\0')
			{
				count++;
				return (count);
			}
		}
		i++;
	}
	return (count);
}

int		ft_word_len(char const *str, char c)
{
	unsigned int	len;

	len = 0;
	while (str[len] && str[len] != c)
		len++;
	return (len);
}

char	**ft_free(char **tab, int tab_index)
{
	while (tab[tab_index])
		free(tab[tab_index--]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	char			**tab;
	unsigned int	tab_index;
	unsigned int	wordlen;

	tab_index = 0;
	if (!str)
		return (NULL);
	if (!(tab = malloc(sizeof(*tab) * (ft_count_words(str, c) + 1))))
		return (NULL);
	while (*str)
	{
		while (*str && *str == c)
			str++;
		if (*str && *str != c)
		{
			wordlen = ft_word_len(str, c);
			if (!(tab[tab_index] = ft_substr(str, 0, wordlen)))
				return (ft_free(tab, tab_index));
			tab_index++;
			while (*str && *str != c)
				str++;
		}
	}
	tab[tab_index] = NULL;
	return (tab);
}
