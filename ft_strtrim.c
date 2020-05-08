/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <pe4enko111@rambler.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 16:25:23 by ametapod          #+#    #+#             */
/*   Updated: 2020/05/08 16:25:23 by ametapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*sub;
	int		i;

	sub = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (sub)
	{
		i = 0;
		while (set[i] && *s1)
		{
			if (set[i++] == *s1)
			{
				i = 0;
				s1++;
			}
		}
		while (*s1)
			*sub++ = *s1++;


	}
	return (0);
}
