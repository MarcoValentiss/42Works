/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:37:54 by azengin           #+#    #+#             */
/*   Updated: 2022/10/13 19:16:54 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t  i;
 
    i = ft_strlen(s) - 1;
    while (s[i])
    {
        if (s[i] == (char)c)
            return (s[i]);
        i--;
    }
    return (0);
}