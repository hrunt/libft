/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:53:07 by mrk               #+#    #+#             */
/*   Updated: 2024/03/11 15:47:08 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	p;
	char			*sub;

	i = 0;
	p = start;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen((char *)s) || len == 0)
		return (malloc(1));
	while (s[p] && i < len)
	{
		p++;
		i++;
	}
	sub = malloc(sizeof(char) * (i + 1));
	if (!sub)
		return (NULL);
	p = start;
	i = 0;
	while (s[p] && i < len)
	{
		sub[i] = s[p];
		i++;
		p++;
	}
	sub[i] = '\0';
	return (sub);
}
/*#include <stdio.h>
int	main()
{
	char s1[] = "0123456789";
	char *s2 = ft_substr(s1, 45, 5);
	printf("%s", s2); 
}*/
