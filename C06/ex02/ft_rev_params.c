/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuratog <psuratog@student.42kocaeli.com.tr+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:29:32 by psuratog          #+#    #+#             */
/*   Updated: 2023/07/31 17:29:33 by psuratog         ###   ########.tr       */
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

	i = ac - 1;
	while (i > 0)
	{
		j = 0;
		while (av[i][j] != '\0' && ac)
		{
			ft_putchar(av[i][j]);
			j++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
