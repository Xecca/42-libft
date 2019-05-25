/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:42:15 by aponomar          #+#    #+#             */
/*   Updated: 2019/05/22 19:15:10 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n)
{
	char	*s3;
	size_t	i;

	s3 = s1;
	i = 0;
	while (*s1 != '\0' && *s1 != '\n')
		s1++;
	while (i < n && *s2 != '\0')
	{
		*s1++ = *s2++;
		i++;
	}
	*s1 = '\0';
	return (s3);
}
