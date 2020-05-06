/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametapod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/02 12:11:05 by ametapod          #+#    #+#             */
/*   Updated: 2020/03/02 15:14:37 by ametapod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	dop(int nbr, int nb, int mod, int er)
{
	int i;

	while (er > 0)
	{
		nbr = nb;
		i = 0;
		while (i < er - 1)
		{
			nbr /= 10;
			i++;
		}
		if (nbr < 0)
		{
			ft_putchar('-');
			ft_putchar(48 + nbr * (-1));
			nb += nbr * -1 * mod;
			nb *= -1;
		}
		else
			ft_putchar(48 + nbr % 10);
		er--;
	}
}

void	ft_putnbr(int nb)
{
	int er;
	int nbr;
	int mod;

	mod = 1;
	er = 0;
	nbr = nb;
	if (nb == 0)
		ft_putchar('0');
	while (nbr != 0)
	{
		nbr /= 10;
		er++;
		if (nbr != 0)
			mod *= 10;
	}
	dop(nbr, nb, mod, er);
}
