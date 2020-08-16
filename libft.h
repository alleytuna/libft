/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/11 14:17:17 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/16 16:29:36 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <strings.h>

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

int					ft_atoi(const char *str);

void				ft_bzero(void *str, unsigned int len);

void				*ft_calloc(size_t count, size_t len);

int					ft_isalnum(int i);

int					ft_isalpha(int i);

int					ft_isascii(int i);

int					ft_isdigit(int i);

int					ft_isprint(int i);

char				*ft_itoa(int value);

void				ft_lstadd_front(t_list **alst, t_list *new);

t_list				*ft_lstlast(t_list *lst);

t_list				*ft_lstnew(void	*content);

int					ft_lstsize(t_list *lst);

void				*ft_memchr(const void *memblock, int search,
unsigned int len);

int					ft_memcmp(const void *p1, const void *p2, int size);

void				*ft_memcpy(void *dst, const void *src, unsigned int len);

void				*ft_memccpy(void *dst, const void *src, int c,
unsigned int len);

void				*ft_memmove(void *dst, const void *src, unsigned int len);

void				*ft_memset(void *ptr, int value, unsigned int len);

void				ft_putchar_fd(char c, int fd);

void				ft_putendl_fd(char *str, int fd);

void				ft_putnbr_fd(int n, int fd);

void				ft_putstr_fd(char *str, int fd);

char				**ft_split(char const *str, char c);

char				*ft_strchr(const char *str, int search);

char				*ft_strdup(const char *src);

char				*ft_strjoin(char const *s1, char const *s2);

unsigned int		ft_strlcat(char *dst, const char *src, unsigned int size);

unsigned int		ft_strlcpy(char *dst, const char *src, size_t dstsize);

int					ft_strlen(const char *str);

char				*ft_strmapi(char const *str, char (*f)(unsigned int, char));

int					ft_strncmp(const char *s1, const char *s2, size_t n);

char				*ft_strnstr(const char *big, const char *little,
unsigned int len);

char				*ft_strrchr(const char *s, int c);

char				*ft_strtrim(char const *str, char const *set);

char				*ft_substr(char const *str, unsigned int start, size_t len);

int					ft_tolower(int i);

int					ft_toupper(int i);

#endif
