/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstfree.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:06:48 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/13 02:21:44 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Free la liste doublement chainee*/

void	ft_dlstfree(t_listdc *l)
{
	t_stack	*tmp;
	t_stack	*pelem;

	pelem = l->first;
	while (pelem)
	{
		tmp = pelem;
		pelem = pelem->next;
		free (tmp);
	}
	l->first = NULL;
	l->last = NULL;
}
