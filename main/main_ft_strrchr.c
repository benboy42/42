/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strrchr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboyeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:17:00 by bboyeau           #+#    #+#             */
/*   Updated: 2018/11/10 15:28:20 by bboyeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(int argc, char **argv)
{
	printf("%s\n",ft_st		rrchr(argv[1],atoi(argv[2])));
	printf("%s",strrchr(argv[1],atoi(argv[2])));
	return (0);
}
