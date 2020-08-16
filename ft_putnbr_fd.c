/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltun <aaltun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 11:06:45 by aaltun            #+#    #+#             */
/*   Updated: 2020/08/16 14:38:29 by aaltun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	n_copy;
	char	c;

	n_copy = n;
	if (n < 0)
	{
		write(fd, "-", 1);
		n_copy = -n_copy;
	}
	if (n_copy > 9)
		ft_putnbr_fd(n_copy / 10, fd);
	c = n_copy % 10 + '0';
	write(fd, &c, 1);
}
