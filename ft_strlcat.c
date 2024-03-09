/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 17:32:26 by mrk               #+#    #+#             */
/*   Updated: 2024/03/04 18:58:52 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int	dst_len;
	int	src_len;
	int	buf;

	dst_len = 0;
	src_len = 0;
	while (dst[dst_len] && dst_len < (int)size)
		dst_len++;
	buf = (int)size - dst_len - 1;
	while (src[src_len] && src_len < buf)
	{
		dst[dst_len + src_len] = src[src_len];
		src_len++;
	}
	if (dst_len < (int)size)
	{	
		dst[dst_len + src_len] = '\0';	
		return (ft_strlen(dst) + ft_strlen((char *)src));
	}
	return (size + ft_strlen((char *)src));
}
/*#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
int	main (void)
{
	char src[] = "lorem";
	char dest[11];
	printf("%ld and %s\n", ft_strlcat(dest, src, 15), dest);
	printf ("%ld and %s", strlcat(dest, src, 15), dest);
}*/
