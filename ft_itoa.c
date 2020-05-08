/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <pe4enko111@rambler.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 21:37:06 by ametapod          #+#    #+#             */
/*   Updated: 2020/05/08 21:37:06 by ametapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		cpy;

	cpy = n;
	len = 0;
	while (cpy)
	{
		cpy /= 10;
		len++;
	}
	if (n <= 0)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[0] = '0';
	if (n < 0)
		str[0] = '-';
	str[len--] = 0;
	while (len >= 0 && n)
	{
		str[len--] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}
