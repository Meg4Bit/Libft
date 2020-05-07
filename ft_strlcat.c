/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <pe4enko111@rambler.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/07 17:44:53 by ametapod          #+#    #+#             */
/*   Updated: 2020/05/07 17:44:53 by ametapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	size_t min;

	i = ft_strlen(dst);
	j = 0;
	min = size;
	if (ft_strlen(dst) < size)
		min = ft_strlen(dst);
	while (i < size - ft_strlen(src))
		dst[i++] = src[j++];
	dst[i] = 0;
	return (min + ft_strlen(src));
}