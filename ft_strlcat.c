/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboyeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 13:05:38 by bboyeau           #+#    #+#             */
/*   Updated: 2018/11/10 16:10:42 by bboyeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned long	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned long i;
	unsigned long j;
	unsigned long n;

	i = 0;
	j = 0;
	n = 0;
	while (dest[i])
		i++;
	while (src[j] && (i + j < size))
	{
		dest[i + j] = src[j];
		j++;
	}
	while (i + j + n < size)
	{	
		dest[i + j + n] = '\0';
		n++;
	}
	return (i + j);
}
