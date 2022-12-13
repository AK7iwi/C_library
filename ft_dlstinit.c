/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstinit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:11:50 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/13 02:22:09 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*init la liste doublement chainee*/

void	ft_dlstinit(t_listdc *l)
{
	l->first = NULL;
	l->last = NULL;
}
