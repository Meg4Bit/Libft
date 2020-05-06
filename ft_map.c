/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 16:59:15 by ametapod          #+#    #+#             */
/*   Updated: 2020/03/09 18:11:00 by ametapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *arr;
	int *arr_2;

	arr = (int *)malloc(sizeof(int) * length);
	arr_2 = arr;
	while (length > 0)
	{
		*arr = f(*tab);
		arr++;
		tab++;
		length--;
	}
	return (arr_2);
}
