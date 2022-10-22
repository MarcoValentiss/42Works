/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:37:41 by azengin           #+#    #+#             */
/*   Updated: 2022/10/22 18:46:40 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char    *ft_strchr(const char *s, int c)
{
    int  i;
  
    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return((char *)&s[i]);
        i++;
    }
    if ((char)c == '\0' && s[i] == '\0')
        return((char *)&s[i]);
    return (0);
}