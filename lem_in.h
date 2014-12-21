/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem_in.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 16:59:19 by evoisin           #+#    #+#             */
/*   Updated: 2014/11/18 17:49:37 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEM_IN_H
# define LEM_IN_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "libft.h"
# include "get_next_line.h"

typedef struct		s_struct
{
	int				nb;
	char 			*salle;
	char			*start;
	char			*end;
	char			*liaison;
	char			*liaisonr;
	char			*chemin;
	int				x;
	char			*alert;
	char			**lines;
	char			*sfin;
}					t_struct;


int					ft_error(void);
char				*tospace(char *str);
int					isaliaison(char *str);
char				*makealist(char *s1, char *s2);
void				makechemin(t_struct *t);
void				reverseliaison(t_struct *t);
char				*parlafin(t_struct * t, char *find);
void				ft_fourmis(t_struct *t);

#endif
