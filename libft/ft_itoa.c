/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 12:55:11 by evoisin           #+#    #+#             */
/*   Updated: 2014/09/28 18:52:51 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strlennbr(int n)
{
	int				i;

	i = 1;
	while (n /= 10)
		i++;
	return (i);
}

char				*ft_itoa(int n)
{
	char			*str;
	int				size;
	int				i;

	i = 0;
	size = ft_strlennbr(n);
	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
		return (0);
	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (n < 0)
	{
		str[i++] = '-';
		n = n * -1;
	}
	while (n /= 10)
		str[i++] = n + 48;
	str[i++] = n + 48;
	return (str);
}
