/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuratog <psuratog@student.42kocaeli.com.tr+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:21:36 by pinarsbakir       #+#    #+#             */
/*   Updated: 2023/08/02 21:21:41 by pinarsbakir      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	i = 0;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (i < power)
	{
		result *= nb;
		i++;
	}
	return (result);
}
