/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strcat.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboyeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:41:52 by bboyeau           #+#    #+#             */
/*   Updated: 2018/11/10 14:46:53 by bboyeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int main(int argc, char **argv)
{
	char dest1[20] = "je suis m\0";
	char dest2[20] = "je suis m\0";
	char src[6] = "abcde\0";
	printf("ma fonction : %s \n",ft_strcat(dest1,src));
	puts("lol");
	printf("la fonction reele : %s",strcat(dest2,src));
	return (0);
}
