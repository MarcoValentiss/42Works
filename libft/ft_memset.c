/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:37:37 by azengin           #+#    #+#             */
/*   Updated: 2022/10/15 14:51:54 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char *s;
    
    s = (unsigned char *)b;
    while (len != 0)
    {
        *s++ = (unsigned char)c;
        len--;
    }
    return (b);
}