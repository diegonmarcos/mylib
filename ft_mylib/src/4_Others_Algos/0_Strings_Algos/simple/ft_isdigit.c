/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 10:55:59 by dinepomu          #+#    #+#             */
/*   Updated: 2025/01/27 22:42:35 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ************************************************************************** *
 * @syntax: int ft_isdigit(int c);
 * @brief: checks for a digit (0 through 9).
 * @param: c: character to be checked.
 * @return: returns 1 if c is a digit, otherwise 0.
 * 
 * @note:
 * 
 * @file: ft_isdigit.c
 * @author: Diego <dinepomu@student.42>
 * @created: 03/Aug/2024 12:07
 * @updated: 10/Nov/2024 11:48
 * ************************************************************************** *
 */

#include "ft_mylib.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
