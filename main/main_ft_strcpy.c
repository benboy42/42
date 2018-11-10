/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcpy.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboyeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:18:37 by bboyeau           #+#    #+#             */
/*   Updated: 2018/11/10 14:30:48 by bboyeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(int argc, char **argv)
{
	char dest[10] = "012545351";
	char src[6] = "abcde\0";
	puts("ok");
	printf("ma fonction : %s \n",ft_strcpy(dest,src));
	puts("lol");
	printf("la fonction reele : %s",strcpy(dest,src));
	return (0);
}
