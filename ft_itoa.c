/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrk <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 18:53:40 by mrk               #+#    #+#             */
/*   Updated: 2024/03/09 12:20:27 by mrk              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

static int	chk(int n)
{
	int	i;

	i = 0;
	if (n < 0)
		i = 1;
	else if (n == 0)
	{
		i = 1;
		return (i);
	}
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}
static char	*cnt(int n)
{
	int	i;
	char	*ar;

	i = 0;
	if (n < 0 || n == 0)
		i = 1; 
	while (n)
	{
		n /= 10;
		i++;
	};
	ar = malloc(sizeof(char) * (i + 1));
	if (!ar)
		return (NULL);
	else
		return (ar);
}	
char	*ft_itoa(int n)
{
	char 	*ar;
	int	i;

	ar = cnt (n);
	if (!ar)
		return (NULL);
	i = chk(n);
	if (n == 0)
		ar[i - 1] = 0 + '0';
	ar[i] = '\0';
	if (n == -2147483648)
	{
		ar[0] = '-';
		ar[1] = '2';
		n = 147483648;
	}
	if (n < 0)
	{
		ar[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{		
		ar[i-- - 1] = (n % 10 + '0');
		n /= 10;
	}
	return (ar);
}
/*#include <stdio.h>
#include <unistd.h>
int main()
{
	char *sd;
	int	i;

	i = 0;

	sd = ft_itoa (-5859);
	while (sd[i] )
	{
		write (1, &sd[i], 1);
		i++;
	}
}*/
