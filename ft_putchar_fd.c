/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <pe4enko111@rambler.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 10:58:16 by ametapod          #+#    #+#             */
/*   Updated: 2020/05/09 12:50:22 by student          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	char *buf[2];

	if (c > 127)
	{
		buff[0] = ((unsigned char)c & 31) | 192;
        buff[1] = ((unsigned char)c & 63) | 128;
		write(fd, buf, 2);
	}
	else
		write(fd, &c, 1);
}
