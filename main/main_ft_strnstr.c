/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strnstr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboyeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 16:08:12 by bboyeau           #+#    #+#             */
/*   Updated: 2018/11/10 17:04:03 by bboyeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"
#include <string.h>

int		main(int argc, char **argv)
{
	printf("mon test:%s\n", ft_strnstr(argv[1], argv[2],atoi(argv[3])));
	printf("mon test:%s\n", strnstr(argv[1], argv[2],atoi(argv[3])));
	return (0);
}
