/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 05:09:12 by elmaksim          #+#    #+#             */
/*   Updated: 2024/04/12 05:10:11 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	repeat_alpha(char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			n = str[i] - 96;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			n = str[i] - 64;
		if (n != 0)
		{
			while (n != 0)
			{
				write(1, &str[i], 1);
				n--;
			}
		}
		else
			write(1, &str[i], 1);
		n = 0;
		i++;
	}
}

intmain(int ac, char **av)
{
	if (ac == 2)
		repeat_alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}
