/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:23:06 by elmaksim          #+#    #+#             */
/*   Updated: 2024/04/12 07:34:14 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "t_point.h"

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	c;

	c = tab[begin.y][begin.x];
	tab[begin.y][begin.x] = 'F';
	if (begin.y + 1 < size.y && tab[begin.y + 1][begin.x] == c)
	{
		t_point	next = {begin.x, begin.y + 1};
		flood_fill(tab, size, next);
	}
	if (begin.y - 1 >= 0 && tab[begin.y - 1][begin.x] == c)
	{
		t_point	next = {begin.x, begin.y - 1};
		flood_fill(tab, size, next);
	}
	if (begin.x + 1 < size.x && tab[begin.y][begin.x + 1] == c)
	{
		t_point	next = {begin.x + 1, begin.y};
		flood_fill(tab, size, next);
	}
	if (begin.x - 1 >= 0 && tab[begin.y][begin.x - 1] == c)
	{
		t_point	next = {begin.x - 1, begin.y};
		flood_fill(tab, size, next);
	}
}
