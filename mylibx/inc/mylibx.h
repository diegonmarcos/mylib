/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mylibx.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 14:44:03 by dinepomu          #+#    #+#             */
/*   Updated: 2025/03/10 13:58:06 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/* https://linktr.ee/diegonmarcos											  */
/* ************************************************************************** */

#ifndef MYLIBX_H
# define MYLIBX_H

# include "mylibx_data.h"
# include <stdbool.h>
# include "../libs/minilibx_linux/mlx.h"

typedef struct s_point
{
	float	axis[3];
	int		color;
	int		hex_color;
	bool	paint;
	float	polar[2];
}			t_point;


//void	ft_draw_line(void *mlx_ptr, void *win_ptr, t_points *p);
//void	ft_draw_line2(unsigned int *img_data, int img_width, t_points *p);
//void	line_variables_init(t_points *p);

//void	doted(t_meta *meta, t_point *project);
//void	draw_dot(t_meta *meta, t_point point, int radius);
//void	dot_util(t_meta *meta, t_point pixel, t_point point, int coord);

void	copy_map(t_point *src, t_point *dst, int len);
void	matrix3_init(float (*matrix)[3]);
t_point	matrix3_multp(float matrix[3][3], t_point point);

#endif
