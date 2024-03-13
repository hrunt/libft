/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 18:18:39 by mrk               #+#    #+#             */
/*   Updated: 2024/03/13 14:07:27 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	ptchr(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ptchr ('-', fd);
		ptchr ('2', fd);
		n = 147483648;
	}
	if (n < 0)
	{
		ptchr ('-', fd);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd (n / 10, fd);
		ft_putnbr_fd (n % 10, fd);
	}
	else
		ptchr (n + '0', fd);
}
/*int	main()
{
	ft_putnbr_fd(10,1);
}*/
