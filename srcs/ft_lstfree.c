/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfree.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:04:54 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/09 19:30:29 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstfree(t_list **lst)
{
	t_list	*current;
	t_list	*temp;

	if (lst && *lst)
	{
		current = *lst;
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*lst = NULL;
	}
}
