/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/09 13:00:28 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/18 21:43:32 by aaltun           ###   ########.fr       */
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

char	**ft_free(char **tab, const char *str, char c)
{
	int		i;

	i = ft_count_words(str, c);
	while (tab[i])
		free(tab[i--]);
	free(tab);
	return (NULL);
}

char	**ft_split(char const *str, char c)
{
	char			**tab;
	unsigned int	tab_index;
	unsigned int	wordlen;
	unsigned int	nbwords;

	tab_index = 0;
	if (!str)
		return (NULL);
	nbwords = ft_count_words(str, c);
	if (!(tab = malloc(sizeof(*tab) * (nbwords + 1))))
		return (NULL);
	while (*str)
	{
		while (*str && *str++ == c)
		if (*str && *str != c)
		{
			wordlen = ft_word_len(str, c);
			if (!(tab[tab_index] = ft_substr(str, 0, wordlen)))
				return (ft_free(tab, str, c));
			tab_index++;
			while (*str && *str != c)
				str++;
		}
	}
	tab[tab_index] = NULL;
	return (tab);
}

int main (int av, char **ac)
{
	char **result;
	int i;

	i = 0;
	result = ft_split(ac[1], ac[2][0]);
	if (!result)
		return (0);
	while (result[i])
	{
		printf("%s\n", result[i]);
		i++;
	}
}