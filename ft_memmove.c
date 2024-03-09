/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:38:55 by mrk               #+#    #+#             */
/*   Updated: 2024/03/04 14:36:46 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stddef.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*dest2;
	char	*src2;

	dest2 = (void *)dest;
	src2 = (void *) src;
	if (dest2 == src2)
		return (dest2);
	if (dest2 < src2)
	{
		while (n--)
		{
			*dest2++ = *src2++;
		}
	}
	if (dest2 > src2)
	{
		while (n--)
		{
			*(dest2 + n) = *(src2 + n);
		}
	}
	return (dest2);
}
/*#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char src[] = "lorem ipsum dolor sit amet";
	char *dest = src + 1;
	int i = 0;
	
	ft_memmove(src,dest,8);
	while (dest[i])
	{	
		write (1, &dest[i], 1);
		i++;
	}
}*/
