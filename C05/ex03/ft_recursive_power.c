/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuratog <psuratog@student.42kocaeli.com.tr+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:23:35 by pinarsbakir       #+#    #+#             */
/*   Updated: 2023/08/02 21:23:37 by pinarsbakir      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		return (nb * ft_recursive_power (nb, (power - 1)));
	}
	else if (power == 0)
		return (1);
	else
		return (0);
}
