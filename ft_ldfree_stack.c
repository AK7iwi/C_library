/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldfree_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:06:48 by mfeldman          #+#    #+#             */
/*   Updated: 2022/11/29 23:16:24 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ldfree_stack(t_listdc *l)
{
	t_stack *tmp;
	t_stack *pelem;
	pelem = l->first;
	while(pelem)
	{
		tmp = pelem;
		pelem = pelem->next;
		free(tmp);
	}
	l->first = NULL;
	l->last = NULL;
}