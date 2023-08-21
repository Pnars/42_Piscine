/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuratog <psuratog@student.42kocaeli.com.tr+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 21:24:36 by pinarsbakir       #+#    #+#             */
/*   Updated: 2023/08/02 21:24:43 by pinarsbakir      ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	while (index >= 2)
	{
		return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
	}
	return (0);
}
