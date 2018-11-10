/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_ft_strchr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboyeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:10:15 by bboyeau           #+#    #+#             */
/*   Updated: 2018/11/10 15:16:24 by bboyeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(int argc, char **argv)
{
	printf("%s\n",ft_strchr(argv[1],atoi(argv[2])));
	printf("%s",strchr(argv[1],atoi(argv[2])));
	return (0);
}
