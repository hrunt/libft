/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 17:30:57 by mrk               #+#    #+#             */
/*   Updated: 2024/03/04 15:11:16 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	i = ft_strlen((char *)s);
	while (s[i] != c && i > 0)
	{
		i--;
	}
	if (s[i] == c || (s[i] == '\0' && c == '\0'))
		return ((char *)&s[i]);
	else
		return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *s = "";
	int i = '\0';
	printf ("%s\n", ft_strrchr(s,i));
	printf("%s", strrchr(s,i));
}*/			
