/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:51:12 by mhrynevi          #+#    #+#             */
/*   Updated: 2024/03/04 15:09:23 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	i2;

	i = 0;
	i2 = 0;
	while (src[i])
		i++;
	if (size > 0)
	{
		while (src[i2] != '\0' && i2 < size - 1)
		{
			dst[i2] = src[i2];
			i2++;
		}
		dst[i2] = '\0';
	}
	return (i);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char s1[] = "ASDC";
	char s2[] = "";

	printf ("%d and %s", ft_strlcpy(s2, s1, -1), s2);
}*/
