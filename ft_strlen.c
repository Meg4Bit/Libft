/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <pe4enko111@rambler.ru>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/06 20:48:15 by ametapod          #+#    #+#             */
/*   Updated: 2020/05/06 20:48:15 by ametapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t strlen(const char *s)
{
	unsigned long int num;

	num = 0;
	while (s[num] && s[num + 1])
		num++;
	return (num);
}
