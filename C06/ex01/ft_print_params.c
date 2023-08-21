/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuratog <psuratog@student.42kocaeli.com.tr+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:29:20 by psuratog          #+#    #+#             */
/*   Updated: 2023/07/31 17:29:22 by psuratog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	j = 1;
	while (j < ac)
	{
		i = 0;
		while (av[j][i] != '\0')
		{
			ft_putchar(av [j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
