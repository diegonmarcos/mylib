/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   halt_exit.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 20:15:53 by dinepomu          #+#    #+#             */
/*   Updated: 2025/01/31 15:41:19 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_mylib.h"

void	halt_exit1(int status)
{
	if (status == 1)
	{
		write(2, "Error\n", 6);
		exit(status);
	}
	exit(status);
}

void	halt_exit_(int status)
{
	if (status == 1)
	{
		write(2, "Error\n", 6);
		exit(status);
	}
	exit(status);
}
