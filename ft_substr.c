/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:53:07 by mrk               #+#    #+#             */
/*   Updated: 2024/03/09 16:04:55 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	count;
	char			*sub;

	i = 0;
	count = start;
	while (s[start] && start < len)
		start++;
	if (start <= ft_strlen((char *)s))
	{
		sub = (char *)malloc(sizeof(char) * (start + 1));
		if (!sub)
			return (NULL);
	
		while (i < start + 1 && i < len && count < ft_strlen((char *)s))
		{
			sub[i] = s[count];
			i++;
			count++;
		}
		sub[i] = '\0';
		return (sub);
	}
	return (0);
}
/*#include <stdio.h>
int	main()
{
	char s1[] = "0123456789";
	char *s2 = ft_substr(s1, 15, 5);
	printf("%s", s2); 
}*/
