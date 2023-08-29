/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 03:04:31 by mfeldman          #+#    #+#             */
/*   Updated: 2023/08/29 16:40:07 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	len_src;
	size_t	i;

	i = 0;
	len_src = ft_strlen(s);
	if (len + start > len_src)
		len = len_src - start;
	if (start > len_src)
		return (ft_calloc(1, sizeof (char)));
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	if (start < (unsigned int)len_src)
	{
		while (i < len)
			str[i++] = s[start++];
	}
	str[i] = '\0';
	return (str);
}
