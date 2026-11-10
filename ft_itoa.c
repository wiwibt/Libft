/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wibouamo <wibouamo@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 04:21:13 by wibouamo          #+#    #+#             */
/*   Updated: 2026/11/10 04:08:59 by wibouamo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(long nb)
{
	int	len;

	len = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		len++;
		nb /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		len;
	int		sign;

	nb = n;
	sign = (nb < 0);
	if (sign)
		nb = -nb;
	len = ft_numlen(nb);
	str = malloc(len + sign + 1);
	if (!str)
		return (NULL);
	str[len + sign] = '\0';
	while (len > 0)
	{
		str[sign + len - 1] = (nb % 10) + '0';
		nb /= 10;
		len--;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
