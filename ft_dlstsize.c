/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 23:21:46 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/13 02:19:29 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Taille liste chainee*/

int	ft_dlstsize(t_listdc *l)
{
	int		i;
	t_stack	*pelem;

	i = 0;
	pelem = l->first;
	while (pelem)
	{
		i++;
		pelem = pelem->next;
	}
	return (i);
}
