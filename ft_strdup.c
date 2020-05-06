/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <pe4enko111@rambler.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 20:27:06 by ametapod          #+#    #+#             */
/*   Updated: 2020/05/06 20:27:06 by ametapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new_str;
	int		i;

	new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (new_str)
	{
		i = 0;
		new_str[i] = s[i];
		while (s[i])
			new_str[i] = s[i++];
	}
	else
		new_str = NULL;
	return (new_str);
}
