/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 17:10:35 by evoisin           #+#    #+#             */
/*   Updated: 2014/11/18 17:53:02 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int			ft_verif(t_struct *t)
{
	if (!t->start || !t->end)
		return (ft_error());
	return (0);
}

int			ft_parsing(char *line, t_struct *t, int i)
{
	char *tmp;

	if (ft_strcmp(line, "##start") == 0)
		return (3);
	if (i == 3)
	{
		t->start = tospace(line);
		t->salle = makealist(t->salle, t->start);
	}
	if (ft_strcmp(line, "##end") == 0)
		return (5);
	if (i == 5)
	{
		t->end = tospace(line);
		t->salle = makealist(t->salle, t->end);
	}
	if (i == 6 && (isaliaison(line) == 0))
	{
		tmp = tospace(line);
		t->salle = makealist(t->salle, tmp);
	}
	if (isaliaison(line) == 1)
		t->liaison = makealist(t->liaison, line);
	return (6);
}

int				main(void)
{
	char		*line;
	int			res;
	int			i;
	t_struct	t;
	int			x;

	i = 0;
	x = 0;
	t.liaison = 0;
	t.salle = 0;
	t.lines = malloc(sizeof(char *) * 300);
	while ((res = get_next_line(0, &line) > 0))
	{
		if (i == 0)
		{
			t.nb = ft_atoi(line);
			if (!t.nb)
				return (ft_error());
		}
		t.lines[x] = line;
		ft_putendl(t.lines[x]);
		x++;
		i = ft_parsing(line, &t, i);
	}
	ft_putchar('\n');
	ft_verif(&t);
	//ft_putendl(t.liaison);
	reverseliaison(&t);
	//parlafin(&t);
	makechemin(&t);
	return (0);
}
