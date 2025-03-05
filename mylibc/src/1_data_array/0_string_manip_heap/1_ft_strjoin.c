/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:59:40 by dinepomu          #+#    #+#             */
/*   Updated: 2025/01/27 20:39:53 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: char *ft_strjoin(const char *s1, const char *s2);
 * @brief: Concatenates two strings.
 * @param: 1. s1 - The prefix string.
 * @return:	The new string. NULL if the allocation fails.
 * 
 * @note:
 * 
 * @file: ft_strjoin.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 12:00
 * ************************************************************************** *
 */

#include "mylibc.h"

char	*ft_strjoin(char *filename, const char *s1, const char *s2)
{
	char	*res;
	int		i;
	int		j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	res = (char *) ft_calloc_fd(filename, (ft_strlen(s1) + ft_strlen(s2) + 1),
			sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = 0;
	return (res);
}
