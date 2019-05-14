/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/08 18:47:38 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/14 16:08:34 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(char *src)
{
	char	*a;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	i = i + 1;
	a = (char*)malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	i--;
	while (i >= 0)
	{
		a[i] = src[i];
		i--;
	}
	return (a);
}
