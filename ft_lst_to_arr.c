/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_to_arr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 04:47:05 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/21 04:47:31 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*array(t_list **a)
{
	int		*arr;
	int		start;
	int		end;
	t_list	*tmp;

	tmp = *a;
	start = 0;
	end = ft_lstsize(*a);
	arr = malloc(sizeof(int) * (end));
	if (!arr)
		return (ft_lstfree(a), NULL);
	while (start < end)
	{
		arr[start] = tmp->value;
		tmp = tmp->next;
		start++;
	}
	return (arr);
}
