/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfeldman <mfeldman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 02:48:46 by mfeldman          #+#    #+#             */
/*   Updated: 2022/05/18 03:18:24 by mfeldman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strtrim(char const *s1, char const *set)
{
    char *s2;
    
    s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1)
    if (!s2)
        return(NULL);       
     
}