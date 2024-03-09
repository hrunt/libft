/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:35:20 by mrk               #+#    #+#             */
/*   Updated: 2024/03/08 16:47:43 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count(char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		else
		{
			while (s[i] && s[i] == c)
				i++;
		}
	}
	return (count);
}

char	*fill(char *s, int i, int cnt)
{
	int		p;
	char	*ar;

	p = 0;
	ar = malloc (sizeof(char) * (i - cnt + 1));
	if (!ar)
		return (NULL);
	while (p < i - cnt)
	{
		ar[p] = s[cnt + p];
		p++;
	}
	ar[p] = '\0';
	return (ar);
}

char	**ft_split(char const *s, char c)
{
	char	**ar;
	int		cnt;
	int		i;
	int		m;

	ar = malloc (sizeof(char *) * (count((char *)s, c) + 1));
	if (!ar)
		return (NULL);
	i = 0;
	m = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			cnt = i;
			while (s[i] != c && s[i])
				i++;
			ar[m] = fill((char *)s, i, cnt);
			m++;
		}
		while (s[i] && s[i] == c)
			i++;
	}
	ar[m] = NULL;
	return (ar);
}
/*#include <stdio.h>
#include <unistd.h>
void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}
int	main()
{
	int	i = 0;
	char **tabstr;
	tabstr = ft_split("split  ||this|for|me|||||!|", '|');
	while (tabstr[i] != NULL)
	{
		ft_print_result(tabstr[i]);
		write(1, "\n", 1);
		i++;
	}	
}*/