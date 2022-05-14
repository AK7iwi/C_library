/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 04:07:20 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/14 11:20:52 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <stdio.h>
#include <string.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char *str;
	
	str = s;
	while(n)
	{
		*str = (unsigned char)c;
		str++;
		n--;
	}
	return(str);	
}

/*
int main()
{
    char str1[20] = "Patate a l'huile";
    char str2[20] = "Patate a l'huile";
    memset(str1 + 5, 't', 3 * sizeof(char));
    ft_memset(str2 + 5, 't', 3 * sizeof(char));
    printf("%s", str1);
    printf("%s","\n");
    printf("%s",str2);
}
*/

