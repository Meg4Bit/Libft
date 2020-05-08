/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <pe4enko111@rambler.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 01:13:38 by ametapod          #+#    #+#             */
/*   Updated: 2020/05/08 15:17:16 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	char	*occ;

	occ = (char *)big;
	if (!*little)
		return (occ);
	while (*big && len)
	{
		i = 0;
		if (*big == little[i])
			occ = (char *)big;
		while (*big == little[i++] && len-- && *big)
			big++;
		if (i - 1 == ft_strlen(little))
			return (occ);
		if (len)
			len--;
		if (*big)
			big++;
	}
	return (0);
}
