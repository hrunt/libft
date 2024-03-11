/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 15:53:07 by mrk               #+#    #+#             */
/*   Updated: 2024/03/11 14:53:13 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	unsigned int	count;
	char			*sub;

	i = 0;
	count = 0;
	if (start > ft_strlen((char *)s) || len == 0)
		start = 0;
	else
	{
		while (s[start] && count < len)
			count++;
			start++;
	}
	sub = (char *)malloc(sizeof(char) * (count + 1));
	if (!sub)
		return (NULL);
	while (i < count + 1 && i < len && start < ft_strlen((char *)s))
	{
		sub[i] = s[count];
		i++;
		count++;
	}
	sub[i] = '\0';
	return (sub);
}
/*#include <stdio.h>
int	main()
{
	char s1[] = "0123456789";
	char *s2 = ft_substr(s1, 2, 1);
	printf("%s", s2); 
}*/
