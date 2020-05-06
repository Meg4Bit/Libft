/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/09 18:31:17 by ametapod          #+#    #+#             */
/*   Updated: 2020/03/09 19:00:29 by ametapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	length--;
	while (length > 0)
	{
		if (f(tab[length], tab[length - 1]) < 0)
			return (0);
		length--;
	}
	return (1);
}
