/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <pe4enko111@rambler.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 12:04:40 by ametapod          #+#    #+#             */
/*   Updated: 2020/05/09 12:04:40 by ametapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char *str;

	str = ft_itoa(n);
	if (str)
	{
		while (*str)
		{
			write(fd, *str, 1);
			str++;
		}
		free (str);
	}
	else
		return (0);
}
