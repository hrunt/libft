/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 17:58:03 by mrk               #+#    #+#             */
/*   Updated: 2024/03/12 17:32:02 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	unsigned char	*s2;

	i = 0;
	s2 = (unsigned char *)s;
	while (i < n)
	{
		s2[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
/*#include <stdio.h>
#include <string.h>
#include <unistd.h>
int	main(void)
{
	char s[] = "ASDCFF";
	int c = 'x';
	char *p;
	int i = 0;
	
	p = ft_memset(s,c,4);
	while (p[i])
	{
		write (1, &p[i], 1);
		i++;
	}
}*/	
