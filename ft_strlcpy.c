/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/11 21:50:46 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/14 19:42:32 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;

	i = 0;
		while (src[i] && i < size - 1 && size != 0) 
		{
			dst[i] = src[i];
			i++;
		}
	if (size > 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}