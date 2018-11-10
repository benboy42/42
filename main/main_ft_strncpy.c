/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncpy.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboyeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:34:12 by bboyeau           #+#    #+#             */
/*   Updated: 2018/11/10 14:34:57 by bboyeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(int argc, char **argv)
{
	char dest[7] = "0";
	char src[6] = "abcde\0";
	int n;

	n = 2;
	printf("ma fonction : %s \n",ft_strncpy(dest,src,n));
	puts("lol");
	printf("la fonction reele : %s",strncpy(dest,src,n));
	return (0);
}
