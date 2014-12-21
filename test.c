/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 23:53:26 by evoisin           #+#    #+#             */
/*   Updated: 2014/11/23 00:03:24 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void		*stockway(char *str, int x)
{
	int		y;

	y = 0;
	while (str[x] != ' ')
	{
		if (str[x] == '\0')
			exit ;
		printf("%c", str[x]);
	//	salletmp[y] = str[x];
	//	y++;
		x++;
	}
}

int		main(void)
{
	char	*str;
	char	blop[] = "4-5 3-4 5-4";
	stockway(blop, 10);
	return (0);
}
