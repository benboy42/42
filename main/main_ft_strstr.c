/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mian_ft_strstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboyeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 15:34:14 by bboyeau           #+#    #+#             */
/*   Updated: 2018/11/10 15:57:34 by bboyeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int		main(int argc, char **argv)
{
	printf("mon test:%s\n",ft_strstr(argv[1], argv[2]));
	printf("mon test:%s\n",strstr(argv[1], argv[2]));
	return (0);
}
