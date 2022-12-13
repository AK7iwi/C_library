/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstfill.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 22:05:43 by mfeldman          #+#    #+#             */
/*   Updated: 2022/12/13 02:18:36 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*push l'element en fin de liste */

void	*ft_dlstfill(t_listdc *l, int val)
{
	t_stack	*new;

	new = malloc (sizeof(t_stack));
	if (!new)
		return (NULL);
	new->value = val;
	new->prev = l->last;
	new->next = NULL;
	if (l->last)
		l->last->next = new;
	else
		l->first = new;
	l->last = new;
	return (0);
}
