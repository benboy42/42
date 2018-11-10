/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strlcat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboyeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:59:16 by bboyeau           #+#    #+#             */
/*   Updated: 2018/11/10 15:09:09 by bboyeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(int argc, char **argv)
{
	char dest1[20] = "je suis m\0";
	char dest2[20] = "je suis m\0";
	char src[6] = "abcde\0";

	int size = 20;
	printf("ma fonction : %lu \n",ft_strlcat(dest1,src,size));
	puts("lol");
	printf("la fonction reele : %lu",strlcat(dest2,src, size));
	return (0);
}
