/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhrynevi <mhrynevi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:34:28 by mhrynevi          #+#    #+#             */
/*   Updated: 2024/03/04 15:10:18 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*s1;

	i = 0;
	s1 = (char *) s;
	while (s1[i] != '\0')
	{
		if (s1[i] == c)
		{
			return (&s1[i]);
			break ;
		}
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return (&s1[i]);
	else
		return (NULL);
}
/*#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *s = "ABC1BD";
	int i = '1';
	printf("%s\n", ft_strchr(s,i));
	printf("%s", strchr(s,i));
}*/
