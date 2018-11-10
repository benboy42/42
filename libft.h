/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bboyeau <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 14:58:56 by bboyeau           #+#    #+#             */
/*   Updated: 2018/11/10 17:27:26 by bboyeau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int				ft_strlen(char * str);
char			*ft_strdup(char *src);
char			*ft_strcpy(char *dest, char *src);
char			*ft_strncpy(char *dest, char *src, int n);
char			*ft_strcat(char *dest, char *src);
char			*ft_strncat(char *dest, char *src, int n);
unsigned long	ft_strlcat(char *dest, char *src, unsigned int size);
char			*ft_strchr(char *s, int c);
char			*ft_strstr(char *str, char *to_find);
char			*ft_strnstr(char *str, char *to_find, int);
int				ft_strcmp(char *s1, char *s2);
int				ft_strncmp(char *s1, char *s2, unsigned int n);
int				ft_atoi(char *str);

