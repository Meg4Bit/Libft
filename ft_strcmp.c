/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 12:21:12 by ametapod          #+#    #+#             */
/*   Updated: 2020/03/09 14:04:52 by ametapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != 0 && *s1 != 0)
	{
		s1++;
		s2++;
	}
	if (*s1 == 0 && *s2 == 0)
		return (0);
	else
		return (*s1 - *s2);
}
