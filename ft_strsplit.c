/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aponomar <aponomar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 18:48:56 by aponomar          #+#    #+#             */
/*   Updated: 2019/06/05 16:48:18 by aponomar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	int		wdcount;
	char	**str;

	if (s == NULL)
		return (NULL);
	wdcount = ft_wdcount(s, c);
	str = (char**)malloc(sizeof(char*) * (wdcount + 1));
	if (str == NULL)
		return (NULL);
	str = ft_sfill(s, str, wdcount, c);
	return (str);
}
