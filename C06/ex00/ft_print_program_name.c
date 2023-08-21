/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuratog <psuratog@student.42kocaeli.com.tr+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:29:06 by psuratog          #+#    #+#             */
/*   Updated: 2023/07/31 17:29:09 by psuratog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;

	i = 0;
	while (av [0][i] != '\0' && ac)
	{
		ft_putchar(av [0][i]);
		++i;
	}
	ft_putchar ('\n');
	return (0);
}