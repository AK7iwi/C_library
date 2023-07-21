/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_sort.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/21 04:54:14 by mfeldman          #+#    #+#             */
/*   Updated: 2023/07/21 04:55:51 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	*lst_sort(int *arr, t_list **a)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	while (i < ft_lstsize(*a))
	{
		j = i + 1;
		while (j < ft_lstsize(*a))
		{
			if (arr[i] > arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}
