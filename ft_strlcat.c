/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:32:26 by mrk               #+#    #+#             */
/*   Updated: 2024/03/11 17:29:12 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dst_len;
	int	src_len;
	int	len;

	dst_len = 0;
	src_len = 0;
	if ((!dst || !src) && !size)
		return (0);
	while (dst[dst_len] && dst_len < (int)size)
		dst_len++;
	if (dst_len < size)
		len = dst_len + ft_strlen((char *)src);
	else
		return (size + ft_strlen((char *)src));
	while (src[src_len] && dst_len + 1 < (int)size)
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
	char src[] = "lorem";
	char dest[] = "bd";
	printf("%ld and %s\n", ft_strlcat(dest, src, 15), dest);
}*/
