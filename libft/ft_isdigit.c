/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evoisin <evoisin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 17:02:51 by evoisin           #+#    #+#             */
/*   Updated: 2013/12/01 03:41:19 by evoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
