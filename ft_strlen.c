/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 13:05:17 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/14 11:21:20 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


/*
int main()
{

	printf("%ld",ft_strlen("hdihr"));
	printf("%ld",ft_strlen(""));
	printf("%ld",ft_strlen(" "));
        printf("%ld",ft_strlen("qwgyfui8"));
	printf("%ld",ft_strlen("qe"));
	printf("%ld",ft_strlen("P"));

	printf("%s","\n");

        printf("%ld",strlen("hdihr"));
        printf("%ld",strlen(""));
        printf("%ld",strlen(" "));
        printf("%ld",strlen("qwgyfui8"));
        printf("%ld",strlen("qe"));
        printf("%ld",strlen("P"));
}
*/

