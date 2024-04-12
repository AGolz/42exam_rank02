/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 05:07:11 by elmaksim          #+#    #+#             */
/*   Updated: 2024/04/12 05:07:52 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;

	if (a < b)
		lcm = a;
	else
		lcm = b;
	while (a > 0 && b > 0)
	{
		if (lcm % a == 0 && lcm % b == 0)
			return (lcm);
		if (a < b)
			lcm += a;
		else
			lcm += b;
	}
	return (0);
}
