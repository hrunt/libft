/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:32:26 by mrk               #+#    #+#             */
/*   Updated: 2024/03/13 18:00:28 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	len;

	dst_len = 0;
	src_len = 0;
	if ((!dst || !src) && !size)
		return (0);
	while (dst[dst_len] && dst_len < size)
		dst_len++;
	if (dst_len < size)
		len = dst_len + ft_strlen((char *)src);
	else
		return (size + ft_strlen((char *)src));
	while (src[src_len] && dst_len + 1 < size)
	{
		dst[dst_len] = src[src_len];
		src_len++;
		dst_len++;
	}
	dst[dst_len] = '\0';
	return (len);
}
/*#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int	main (void)
{
	char src[] = "AAAAAAAAA";
	char dest[30];
	ft_memset(dest, 0, 30);
	dest[0] = 'B';
	
	printf("%ld and %s\n", ft_strlcat(dest, src, -1), dest);
}*/
