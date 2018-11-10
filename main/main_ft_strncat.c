/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strncat.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboyeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:48:04 by bboyeau           #+#    #+#             */
/*   Updated: 2018/11/10 14:52:49 by bboyeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(int argc, char **argv)
{
	char dest1[20] = "je suis m\0";
	char dest2[20] = "je suis m\0";
	char src[6] = "abcde\0";
	int n = 3;

	printf("ma fonction : %s \n",ft_strncat(dest1,src,n));
	puts("lol");
	printf("la fonction reele : %s",strncat(dest2,src,n));
	return (0);
}
