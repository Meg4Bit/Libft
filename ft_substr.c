/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <pe4enko111@rambler.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 15:56:44 by ametapod          #+#    #+#             */
/*   Updated: 2020/05/08 15:56:44 by ametapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		i;
	char	*sub;

	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (sub)
	{
		i = 0;
		while (len-- && s[start])
			sub[i++] = s[start++];
		sub[i] = 0;
		return (sub);
	}
	return (0);
}
