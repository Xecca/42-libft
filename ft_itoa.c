/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:49:11 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/22 18:45:59 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	size(int i)
{
	int	size;

	if (i == 0)
		return (2);
	size = 1;
	if (i < 0)
	{
		i *= -1;
		size++;
	}
	while (i > 0)
	{
		i /= 10;
		size++;
	}
	return (size);
}

char		*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		sign;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = size(n);
	sign = 0;
	if (n < 0)
	{
		sign = 1;
		n = -n;
	}
	if ((str = (char *)malloc(len)) == NULL)
		return (NULL);
	str[--len] = '\0';
	while (--len >= sign)
	{
		str[len] = n % 10 + '0';
		n /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}
