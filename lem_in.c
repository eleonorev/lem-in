/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 17:13:28 by evoisin           #+#    #+#             */
/*   Updated: 2014/11/18 17:49:15 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			isaliaison(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '#')
		return (-1);
	while (str[i])
	{
		if (str[i] == '-')
			return (1);
		i++;
	}
	return (0);
}

char	*parlafin(t_struct * t, char *find)
{
	int		i;
	int		x;
	char	*tmp;

	i = 0;
	x = 0;
	while (t->liaison[i])
	{
		x = 0;
		while (t->liaison[i] == find[x])
		{
			x++;
			i++;
		}
		if (!find[x] && t->liaison[i] == '-')
		{
					ft_putchar(t->liaison[i]);
			tmp = tospace(t->liaison + i + 1);
			break ;
		}
		i++;
	}
	return (tmp);
}

void		wayy(t_struct *t)
{
	char	*tmpend;
	char	*tmpstart;

	tmpend = parlafin(t, t->end);
	tmpstart = parlafin(t, t->start);
//	ft_putendl(tmpstart);
	ft_putendl(tmpend);
	if (ft_strcmp(tmpstart, tmpend) == 0)
	{
		makealist(t->chemin, tmpstart);
		makealist(t->chemin, t->end);
		//ft_fourmis(t);
	}
	//ft_putendl(tmpend);
//	ft_putendl(tmpstart);
	t->start = tmpstart;
	return ;
}
/*
void		wayy(t_struct *t)
{
	int		i;
	int		x;
	char 	*tmp;

	x = 0;
	i = 0;
	ft_putendl(t->start);
	while (t->liaison[i] || ft_strcmp(t->start, t->end) != 0)
	{
		if (t->liaison[i] == t->start[x])
			x++;
		i++;
		if (t->start[x] == '\0' && t->liaison[i] == '-')
		{
			i++;
		//	ft_putchar(t->liaison[i]);
			tmp = tospace(t->liaison + i);
			if (ft_strstr(t->chemin, tmp) == 0)
			{
				t->chemin = makealist(t->chemin, tmp);
				t->start = tmp;
				ft_putendl(t->start);
			}
			//i++;
			break ;
		}
		if (t->start[x] != t->liaison[i] && t->start[x])
			x = 0;
	}
	ft_putendl(t->start);
	ft_putendl(t->chemin);
	return ;
}*/

void		makechemin(t_struct *t)
{
	t->chemin = t->start;
	while (ft_strcmp(t->start, t->end) != 0)
		wayy(t);
//	ft_putendl(t->chemin);
	return ;
}
