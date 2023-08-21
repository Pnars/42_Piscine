/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuratog <psuratog@student.42kocaeli.com.tr+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:29:10 by pinarsbakir       #+#    #+#             */
/*   Updated: 2023/08/02 21:29:20 by pinarsbakir      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (2);
	while (i * i <= nb && i <= 46340)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	x;

	x = ft_is_prime(nb);
	if (x == 2)
		return (2);
	if (x == 0)
	{
		while (!ft_is_prime (nb))
		{
			nb++;
		}
	}
	return (nb);
}
