/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cpytospace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 17:57:49 by evoisin           #+#    #+#             */
/*   Updated: 2014/11/17 18:06:54 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

char		*tospace(char *str)
{
	char	*new;
	int		i;

	i = 0;
	while (str[i] != ' ' && str[i] != '-')
		i++;
	while (str[i])
		str[i++] = '\0';
	if (!(new = (char *)malloc(sizeof(char) * i + 1)))
		return (0);
	new = str;
	return (new);
}

char		*makealist(char *s1, char *s2)
{
	int		i;
	int 	y;
	char 	*new;
	
	i = 0;
	y = 0;
	if (!s1)
		return (s2);
	if (!(new = malloc(sizeof(char) * ft_strlen(s1) + ft_strlen(s2) + 2)))
		return (0);
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	if (i > 0)
	{
		new[i] = ' ';
		i++;
	}
	while (s2[y])
		new[i++] = s2[y++];
	new[i] = '\0';
	return (new);
}

void		reverseliaison(t_struct *t)
{
	int		i;
	int		tp;
	char	c;
	char	*tmp;
	int		x;
	char	u;

	x = 0;
	i = ft_strlen(t->liaison);
	tmp = (char *)malloc(i + 2);
	tp = 0;
	tmp[x++] = ' ';
	while (i >= 0)
	{
		if (t->liaison[i] == '-' || t->liaison[i] == ' ')
		{
			c = t->liaison[i];
			tp = i;
			u = ' ';
			if (c == ' ')
				u = '-';
			i++;
			while (t->liaison[i] != u && t->liaison[i])
				tmp[x++] = t->liaison[i++];
			tmp[x++] = c;
			i = tp - 1;
		}
		i--;
	}
	tmp[x++] = t->liaison[0];
	t->liaison = ft_strjoin(t->liaison, tmp);
	ft_putendl(t->liaison);
}