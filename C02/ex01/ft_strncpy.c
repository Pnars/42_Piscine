/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuratog <psuratog@student.42kocaeli.com.tr+#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 09:33:28 by psuratog          #+#    #+#             */
/*   Updated: 2023/07/26 09:33:32 by psuratog         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((src[i] != '\0') && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest [i] = '\0';
		i++;
	}
	return (dest);
}
