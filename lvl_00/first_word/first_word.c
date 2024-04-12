/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elmaksim <elmaksim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 07:19:37 by elmaksim          #+#    #+#             */
/*   Updated: 2024/04/12 07:22:10 by elmaksim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	first_word(char *str)
{
	while (*str && (*str == ' ' || *str == '\t'))
		str++;
	while (*str && (*str != ' ' && *str != '\t'))
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 2)
		first_word(av[1]);
	write(1, "\n", 1);
	return (0);
}
