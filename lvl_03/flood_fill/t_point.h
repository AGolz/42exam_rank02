/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_point.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:24:11 by elmaksim          #+#    #+#             */
/*   Updated: 2024/04/12 07:36:19 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_POINT_H
# define T_POINT_H

typedef struct s_point
{
	int	x;
	int	y;
}				t_point;

void	flood_fill(char **tab, t_point size, t_point begin);

#endif