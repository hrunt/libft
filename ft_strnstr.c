/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:43:20 by mrk               #+#    #+#             */
/*   Updated: 2024/03/04 16:48:56 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	bg;
	size_t	lt;
	size_t	length;

	bg = 0;
	lt = 0;
	length = ft_strlen((char *) little);
	if (ft_strlen((char *)little) == 0)
		return ((char *)big);
	while (big[bg] && (bg + length) <= len)
	{
		if (big[bg] == little[lt] && ft_strncmp(big + bg, little, length) == 0)
			return ((char *)big + bg);
		bg++;
	}
	return (NULL);
}
/*#include <stdio.h>
int	main(void)
{
	char *big = "lorem ipsum dolor sit amet";
	char little[] ="dolor";
	printf("%s\n", ft_strnstr(big, little, 0));
}*/
