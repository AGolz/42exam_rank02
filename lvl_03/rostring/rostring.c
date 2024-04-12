/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 04:59:18 by elmaksim          #+#    #+#             */
/*   Updated: 2024/04/12 05:04:04 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	skip_space(char c)
{
	return (c == ' ' || c == '\t');
}

void	rostring(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		while (skip_space(str[i]))
			i++;
		if (str[i] && !skip_space(str[i]))
		{
			if (len == 0)
				while (str[i] && !skip_space(str[i++]))
					len++;
			else
			{
				while (str[i] && !skip_space(str[i]))
					write(1, &str[i++], 1);
				write(1, " ", 1);
			}
		}
	}
	i = 0;
	while (skip_space(str[i]))
		i++;
	while (len--)
		write(1, &str[i++], 1);
}

int	main(int ac, char **av)
{
	if (ac >= 2)
		rostring(av[1]);
	write(1, "\n", 1);
	return (0);
}
