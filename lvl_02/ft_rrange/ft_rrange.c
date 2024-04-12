/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:22:36 by elmaksim          #+#    #+#             */
/*   Updated: 2024/04/12 07:22:39 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_rrange(int start, int end)
{
	int	*range;
	int	len;
	int	i;

	i = 0;
	if (start > end)
		return (ft_rrange(end, start));
	len = end - start + 1;
	range = (int *)malloc(sizeof(int) * len);
	if (range)
	{
		while (i < len)
		{
			range[i] = end;
			end--;
			i++;
		}
	}
	return (range);
}
