/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:22:11 by mrk               #+#    #+#             */
/*   Updated: 2024/03/07 17:08:58 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <string.h>
char	*ft_convert(char *src, char c)
{
	char	*arr;
	char	*buff;

	arr = (char *)malloc(sizeof(char) * 2);
	if (!arr)
		return (0);
	arr[0] = c;
	arr[1] = '\0';
	buff = ft_strtrim(src, arr);
	free (arr);
	return (buff);
}

int	ft_cnt(char *src, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (src[i])
	{
		if (src[i] == c && src[i + 1] != c)
			count++;
		i++;
	}
	return (count);
}
char	**ft_split(char const *s, char c)
{
	char	*trim;
	char 	**str;
	int	i;
	int	p;
	int	d;
	
	i = 0;
	p = 0;
	d = 0;
	trim = ft_convert((char *)s, c);	 
	if (trim == NULL)
		return(0);
	str = malloc((ft_cnt(trim, c) + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (p < (ft_cnt(trim,c) + 1))
	{	
		while (trim[i])	
		{
			if (trim[i] == c)
			{	
				break ;
			}
		i++;
		d++;
		}
		str[p] = malloc((d + 1) * sizeof(char));
		if (!str[p])
			return (NULL);
		d = 0;
		while (trim[i] == c && trim[i])
			i++;
		p++;
	}
	i = 0;
	p = 0;
	d = 0;
	while (p < (ft_cnt(trim,c) + 1))
	{
		while (trim[i])
		{
			if (trim[i] == c)
			{
				break ; 
			}
			str[p][d] = trim[i];
			d++;
			i++;
		}
		str[p][d] = '\0';
		while (trim[i] == c && trim[i])
			i++;	
		d = 0;
		p++;
	}
	str[p] = NULL;
	free(trim);		
	return(str);		
}
#include <stdio.h>
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
	while (tabstr[i])
	{
		printf("%d", 65);
		ft_print_result(tabstr[i]);
		write(1, "\n", 1);
		i++;
	}	
}
