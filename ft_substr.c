/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 03:04:31 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/16 10:16:32 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
  
    char *dest;
    size_t i;
    int j;

    i = 0;
    j = 0;
    if (len > ft_strlen(s) - start)
        j = ft_strlen(s) - start;
    else
        j = len ;
    dest = malloc(sizeof (char) * (j + 1));
    if (!dest)
        return(NULL);
    if (len <= 0)
        return(NULL);
    while (i < start)
    {
        i++;
    }
    while(i <= len + start - 1)
    {
        dest[i - start] = s[i]; 
        i++;
    } 
    dest[i] = '\0';
    return(dest);   
}

/*
int main()
{
    printf("%s", ft_substr("coucklo", 2, 56789));
}
*/