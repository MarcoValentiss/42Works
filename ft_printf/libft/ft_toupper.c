/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azengin <azengin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 21:37:58 by azengin           #+#    #+#             */
/*   Updated: 2022/12/17 17:46:39 by azengin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if ((unsigned char)c >= 'a' && (unsigned char)c <= 'z')
		return ((unsigned char)c - 32);
	else
		return ((unsigned char)c);
}
