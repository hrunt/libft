/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:34:28 by mhrynevi          #+#    #+#             */
/*   Updated: 2024/03/09 15:19:12 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = 0;	
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == 0 && s[i] == '\0')
		return ((char *)&s[i]);
	return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *s = NULL;
	int i = 'D';
	printf("%p\n", ft_strchr(s,i));
	printf("%p", strchr(s,i));
}*/
